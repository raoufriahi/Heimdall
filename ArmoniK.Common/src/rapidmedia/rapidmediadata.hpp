/*
 * Copyright (c) 2017-2018 Heimdall
 *
 * The computer program contained herein contains proprietary
 * information which is the property of Heimdall.
 * The program may be used and/or copied only with the written
 * permission of Heimdall or in accordance with the
 * terms and conditions stipulated in the agreement/contract under
 * which the programs have been supplied.
 */
#ifndef __V_RAPID_MEDIA_DATA_HPP__
#define __V_RAPID_MEDIA_DATA_HPP__
#include "rapidmedia/rapidmedia.hpp"
#include "rapidmedia/rapidmediadata.hpp"
#include "cppkit/ck_memory.h"
#include "rapidrtsp.h"
#include "XSDK/TimeUtils.h"
#include "XSDK/XBlockingQueue.h"
#include "utility/fast_mutex.h"
#include "utility/tinythread.h"

using namespace cppkit;
using namespace XSDK;

#define RAPID_BLOCK_QUEUE_MAX 10
#define RAPID_BLOCK_SIZE 1024 * 16

class RapidMediaData
{
public:
	RapidMediaData(RapidMedia &pMedia);
	~RapidMediaData();
public:
	static void RapidRTSPEventHandle(int eventType, int lParam, void *rParam,
				void *context);
	static void RapidRTSPDataHandle(void *pdata, uint32_t dataSize, 
		uint32_t sec, uint32_t msec , int dataType, VideoStreamType streamType, 
		VideoFrameType frameType, unsigned int flag, CRapidRTSPAVInfo &pAVInfo, void *context);
	void RapidRTSPEventHandle1(int eventType, int lParam, void *rParam);
	void RapidRTSPDataHandle1(void *pdata, uint32_t dataSize, 
		uint32_t sec, uint32_t msec,  int dataType, VideoStreamType streamType, 
		VideoFrameType frameType, unsigned int flag, CRapidRTSPAVInfo &pAVInfo);
public:
	BOOL Init(BOOL bRealStream, string strUrl, string strUser, 
		string strPass, BOOL bHWAccel, VSCConnectType connectType);
	void	SetDataHandler(RMDataHandler handle, void *pContext);
	void	SetRawDataHandler(RMRawVideoHandler handle, void *pContext);
	BOOL Start();
	BOOL Stop();
	BOOL StartRaw();
	BOOL StopRaw();
	BOOL StartRapidRTSP();
	BOOL StopRapidRTSP();
	BOOL PutData(VideoFrame& packet);

	BOOL StartDataHandlerThread();
	BOOL StopDataHandlerThread();
	BOOL StartRawHandlerThread();
	BOOL StopRawHandlerThread();
public:
	static void RunData(void * pParam);
	void RunData1();
	static void RunRaw(void * pParam);
	void RunRaw1();

public:
	BOOL InitBlockQueue();
	BOOL InitBlockQueueRaw();
	BOOL UnInitBlockQueue();
	BOOL UnInitBlockQueueRaw();
public:
	void Lock(){m_Lock.lock();}
	bool TryLock(){return m_Lock.try_lock();}
	void UnLock(){m_Lock.unlock();}
	
private:
	RapidMedia &m_Media;
	CRapidRTSP *m_pRTSP;
	BOOL m_bRealStream;
	string m_strUrl; 
	string m_strUser;
	string m_strPass;
	BOOL m_bHWAccel;
	VSCConnectType m_connectType;

private:
	XBlockingQueue<VideoFrame *> m_Queue4Data; /* Data block for Data callback */
	XBlockingQueue<VideoFrame *> m_Queue4Raw; /* Data block for Video decode */
	XBlockingQueue<VideoFrame *> m_Queue4DataFree; /* Data block for Data callback Free */
	XBlockingQueue<VideoFrame *> m_Queue4RawFree; /* Data block for Video decode Free */
	BOOL m_QueueDataLost;
	BOOL m_QueueRawLost;
	BOOL m_InitBlock;
	BOOL m_InitBlockRaw;
	tthread::thread *m_pThreadData;
	tthread::thread *m_pThreadRaw;
	BOOL m_bExitData;
	BOOL m_bExitRaw;

private:
	/* data callback function */
	RMDataHandler m_dataHandler;
	void *m_pDataContext;
	RMRawVideoHandler m_rawVideoHandler;
	void *m_pRawVideoContext;
	s32 m_nAttachedRTSP;
	s32 m_nAttached;
	s32 m_nAttachedRaw;

	tthread::fast_mutex m_Lock;
	
};

#endif
