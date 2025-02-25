
/*
 * Copyright (c) 2017-2023 UbVideo
 *
 * The computer program contained herein contains proprietary
 * information which is the property of UbVideo.
 * The program may be used and/or copied only with the written
 * permission of UbVideo or in accordance with the
 * terms and conditions stipulated in the agreement/contract under
 * which the programs have been supplied.
 */
#include <google/protobuf/util/json_util.h>
#include "utility/type.hpp"
#include "config/linkproto.pb.h"
#include "server/factory.hpp"
#include "CivetServer.h"
#include "link/linkstream.hpp"
using namespace Poco;


LinkServerPlayback::LinkServerPlayback(LinkPlaybackInterface &pPbInf, Factory &pFactory, string strId, u32 nPlaytime)
:m_pFactory(pFactory), m_pPbInf(pPbInf), m_strId(strId), m_nPlaytime(nPlaytime), 
m_pbWrapper(pFactory.GetVdb(), strId, nPlaytime, (PBCallbackFunctionPtr)(LinkServerPlayback::DataHandler), 
false, this), m_bQuit(false), m_pThread(NULL) {
	m_pThread = new std::thread(LinkServerPlayback::run, this);
}

LinkServerPlayback::~LinkServerPlayback()
{
	if (m_pThread != NULL) {
		QuitPlay();
	}
}

void LinkServerPlayback::run1()
{
	m_pbWrapper.run();
	while(m_bQuit != true) {
		usleep(300 * 1000);
	}
}

void LinkServerPlayback::run(void* pData)
{
	LinkServerPlayback * pThread = (LinkServerPlayback *)pData;
	if (pThread) {
		return pThread->run1();
	}
	return;		
}

bool LinkServerPlayback::SeekToTime(u32 seekTime)
{
	m_pbWrapper.SeekToTime(seekTime);
	return true;
}
bool LinkServerPlayback::StartPlay()
{
	m_pbWrapper.StartPlay();
	return true;
}
bool LinkServerPlayback::PausePlay()
{
	m_pbWrapper.PausePlay();
	return true;
}
bool LinkServerPlayback::QuitPlay()
{
	XGuard guard(m_cMutex);
	m_bQuit = true;
	m_pbWrapper.QuitPlay();
	m_pThread->join();
	delete m_pThread;
	m_pThread = NULL;
	
	return true;
}

LinkStream::LinkStream(Factory &pFactory)
:m_pFactory(pFactory), m_bLogin(false),  m_server(NULL), m_bStreaming(false), m_nStream(-1),
m_pConnection(NULL), m_bPlayback(false), m_pSendBuf(NULL), m_nSendBufSize(0), m_pPlayback(NULL)
{
	UUIDGenerator uuidCreator;
	
	m_seesionId  = uuidCreator.createRandom().toString();
}
LinkStream::~LinkStream()
{
	/* stop all the stream */
	StopAll();
}

bool LinkStream::ProcessLoginReq(Link::LinkCmd &req, CivetServer *pServer, mg_connection *pConnection)
{
	long long p = (long long)pConnection;
	Link::LinkCmd cmdResp;
	if (!req.has_loginreq()) {
		return false;
	}
	
	
	const LinkLoginReq& pLogin =  req.loginreq();

	cmdResp.set_type(Link::LINK_CMD_LOGIN_RESP);
	LinkLoginResp * resp = new LinkLoginResp;

	string realPasswd = "admin";

	SimpleCrypt crypt;
	// here has error QString strDePasswd = m_pFactory.GetAdminPasswd(realPasswd);
	bool bRet = m_pFactory.GetAdminPasswd(realPasswd);

	//realPasswd = crypt.decryptToString(strDePasswd).toStdString();
	realPasswd = "admin";

	/* calc the md5 and compare */
	std::string pass = m_seesionId + realPasswd;

	XMD5 md5Check;
	md5Check.Update((const uint8_t*)(pass.c_str()), pass.length());

	md5Check.Finalize();
	std::string md5Output = md5Check.GetAsString().c_str();
	

	if (md5Output == pLogin.strpasswd())
	{
		resp->set_bret(true);
		m_bLogin = true;
		resp->set_bretnonce(false);
	}else
	{
		resp->set_strnonce(m_seesionId);
		resp->set_bretnonce(true);
	}

	cmdResp.set_allocated_loginresp(resp);

	SendRespMsg(cmdResp, pServer, pConnection);

	return true;
}

bool LinkStream::ProcessStartLiveReq(Link::LinkCmd &req, CivetServer *pServer, mg_connection *pConnection)
{
	long long p = (long long)pConnection;
	Link::LinkCmd cmdResp;
	if (!req.has_startlivecmd()) {
		return false;
	}

	m_server = pServer;
	m_pConnection = pConnection;
	
	const LinkStartLiveCmd& pReq =  req.startlivecmd();

	/* Start live */
	m_strLiveviewId = pReq.strid();
	m_nStream = pReq.nstream();

	if (m_nStream == 1) {
		m_pFactory.RegDataCallback(pReq.strid(),
		(CameraDataCallbackFunctionPtr)LinkStream::DataHandler, 
			(void *)this);
	}
	else if (m_nStream == 2) {
		m_pFactory.RegSubDataCallback(pReq.strid(),
		(CameraDataCallbackFunctionPtr)LinkStream::DataHandler, 
			(void *)this);
	}
	else  {
		m_pFactory.RegDataCallback(pReq.strid(),
		(CameraDataCallbackFunctionPtr)LinkStream::DataHandler, 
			(void *)this);
	}

	m_bStreaming = true;
	m_bPlayback = false;

	return true;
}

bool LinkStream::ProcessStopLiveReq(Link::LinkCmd &req, CivetServer *pServer, mg_connection *pConnection)
{
	long long p = (long long)pConnection;
	Link::LinkCmd cmdResp;
	if (!req.has_stoplivecmd()) {
		return false;
	}
	
	const LinkStopLiveCmd& pReq =  req.stoplivecmd();

	StopAll();

	return true;
}

bool LinkStream::ProcessPlayBackReq(Link::LinkCmd &req, CivetServer *pServer, mg_connection *pConnection)
{

    if (!req.has_playbackcmd())
		return false;

    const LinkPlayBackCmd& pReq =  req.playbackcmd();

	m_server = pServer;
	m_pConnection = pConnection;

	/* Start playback */
	if (m_pPlayback != NULL) {
		m_pPlayback->QuitPlay();
		/* the playback thread will delete auto */
		delete m_pPlayback;
		m_pPlayback = NULL;
	}

	m_pPlayback = new LinkServerPlayback(*this, m_pFactory, pReq.strid(), 
						pReq.nplaytime());
	m_pPlayback->StartPlay();
	m_bPlayback = true;
	return true;	
}

bool LinkStream::ProcessPlayPauseReq(Link::LinkCmd &req, CivetServer *pServer, mg_connection *pConnection)
{
	if (!req.has_playpausecmd())
        return false;

    req.playpausecmd();
	/* Start playback */
	if (m_pPlayback != NULL)
        m_pPlayback->PausePlay();
	return true;	
}
bool LinkStream::ProcessPlayResumeReq(Link::LinkCmd &req, CivetServer *pServer, mg_connection *pConnection)
{
	if (!req.has_playresumecmd())
        return false;

    req.playresumecmd();
	/* Start playback */
	if (m_pPlayback != NULL)
        m_pPlayback->StartPlay();
	return true;
}

bool LinkStream::ProcessPlaySeekReq(Link::LinkCmd &req, CivetServer *pServer, mg_connection *pConnection)
{
	if (!req.has_playseekcmd())
		return false;
    const LinkPlaySeekCmd& pReq =  req.playseekcmd();
	/* Start playback */
	if (m_pPlayback != NULL)
		m_pPlayback->SeekToTime(pReq.nplaytime());
	return true;
}
bool LinkStream::ProcessPlayStopReq(Link::LinkCmd &req, CivetServer *pServer, mg_connection *pConnection)
{
	if (!req.has_playstopcmd())
        return false;
    req.playstopcmd();
	StopAll();
	return true;
}


bool LinkStream::StopAll()
{
    if (m_bStreaming == true)
	{
        switch(m_nStream)
        {
        case 1:
            m_pFactory.UnRegDataCallback(m_strLiveviewId, (void *)this);
            break;
        case 2:
            m_pFactory.UnRegSubDataCallback(m_strLiveviewId, (void *)this);
            break;
        default:
            m_pFactory.UnRegDataCallback(m_strLiveviewId, (void *)this);
            break;
        }
	}

    if (m_bPlayback && m_pPlayback)
	{
		m_pPlayback->QuitPlay();
		/* the playback thread will delete auto */
		delete m_pPlayback;
		m_pPlayback = NULL;
	}
    return true;
}

void LinkStream::DataHandler1(VideoFrame& frame)
{
	if (m_nSendBufSize < (frame.dataLen + sizeof(VideoFrameHeader))) {
		if (m_pSendBuf) {
			delete m_pSendBuf;
            m_pSendBuf =NULL;
		}
		m_pSendBuf = new unsigned char[frame.dataLen + sizeof(VideoFrameHeader) + 1];
		m_nSendBufSize = frame.dataLen + sizeof(VideoFrameHeader);
	}
	VideoFrameHeader *frameHeader = (VideoFrameHeader *)m_pSendBuf;

    frameHeader->streamType  = htonl(frame.streamType);
    frameHeader->frameType   = htonl(frame.frameType);
    frameHeader->secs        = htonl(frame.secs);
    frameHeader->msecs       = htonl(frame.msecs);
    frameHeader->dataLen     = htonl(frame.dataLen);

	memcpy(m_pSendBuf + sizeof(VideoFrameHeader), frame.dataBuf, frame.dataLen);
    mg_websocket_write(m_pConnection,
                       WEBSOCKET_OPCODE_BINARY, (const char *)m_pSendBuf, frame.dataLen + sizeof(VideoFrameHeader));
	
}

void LinkStream::DataHandler(VideoFrame& frame, void * pParam)
{
    LinkStream *pObj = static_cast<LinkStream *> (pParam);
    return pObj->DataHandler1(frame);
}

bool LinkStream::NewFrame(VideoFrame& frame)
{
	DataHandler1(frame);
	return true;
}
	                        


bool LinkStream::ProcessMsg(std::string &strMsg, CivetServer *pServer, mg_connection *pConnection)
{
    Link::LinkCmd cmd;
	::google::protobuf::util::Status status = 
		::google::protobuf::util::JsonStringToMessage(strMsg, &cmd);
	if (!status.ok())
		return false;
	switch (cmd.type())
	{

    case Link::LINK_CMD_LOGIN_REQ:
        return ProcessLoginReq(cmd, pServer, pConnection);
    case Link::LINK_CMD_START_LIVE_CMD:
        return ProcessStartLiveReq(cmd, pServer, pConnection);
    case Link::LINK_CMD_STOP_LIVE_CMD:
        return ProcessStopLiveReq(cmd, pServer, pConnection);
    case Link::LINK_CMD_PLAY_BACK_CMD:
        return ProcessPlayBackReq(cmd, pServer, pConnection);
    case Link::LINK_CMD_PLAY_RESUME_CMD:
        return ProcessPlayResumeReq(cmd, pServer, pConnection);
    case Link::LINK_CMD_PLAY_STOP_CMD:
        return ProcessPlayStopReq(cmd, pServer, pConnection);
    case Link::LINK_CMD_PLAY_SEEK_CMD:
        return ProcessPlaySeekReq(cmd, pServer, pConnection);
    case Link::LINK_CMD_PLAY_PAUSE_CMD:
        return ProcessPlayPauseReq(cmd, pServer, pConnection);
    default:
        return false;
    }
}

bool LinkStream::SendRespMsg(Link::LinkCmd &resp, CivetServer *pServer, mg_connection *pConnection)
{
	std::string strMsg;
	::google::protobuf::util::Status status = 
		::google::protobuf::util::MessageToJsonString(resp, &strMsg);
    return (status.ok() && mg_websocket_write(pConnection, WEBSOCKET_OPCODE_TEXT, strMsg.c_str(), strMsg.length()) == strMsg.length())? true: false;
}

