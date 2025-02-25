/*
 * Copyright (c) 2017-2024 UbVideo
 *
 * The computer program contained herein contains proprietary
 * information which is the property of UbVideo.
 * The program may be used and/or copied only with the written
 * permission of UbVideo or in accordance with the
 * terms and conditions stipulated in the agreement/contract under
 * which the programs have been supplied.
 */
#include "mediafile.hpp"
#include "debug.hpp"
#include "XSDK/TimeUtils.h"

using namespace XSDK;

#define MF_VERSION 1

#define MF_HEADER_LEN 1024 /* MF Header length is 1024 for some byte reserve */
#define MF_TIME_POS_LEN 1024 * 512 /* MF Time postion length */
#define MF_TIME_POS MF_TIME_POS_LEN/(sizeof(int) * 2) /* Each time postion has 4 bytes */

/* Header */
typedef struct __MFHeader{
    unsigned int version;/* version */
    unsigned int startTime;
    unsigned int endTime;
} MFHeader;

/* Time postion header, here must be (sizeof(int) * 2) bytes */
typedef struct __MFTimePostion{
	unsigned int time;
    unsigned int postion;/* the postions */
}  MFTimePostion;

/* packet link, all the packet are list by this link */
typedef struct __MFPktLink{
	unsigned int prev;
	unsigned int next;
	unsigned int dataLen;
	unsigned int streamType;
	unsigned int frameType;
	unsigned int secs;       /* timestamp in seconds */
	unsigned int msecs;      /* timestamp in mseconds */
} MFPktLink;


typedef struct __MFTimePostionVector{
   MFTimePostion timePostion[MF_TIME_POS];
   unsigned int postion[MF_TIME_POS];/* the postion of this Postion */
} MFTimePostionVector;

class MediaFileData
{
public:
	MediaFileData(string & strPath, unsigned int startTime, MediaSessionType type, unsigned int maxLength, 
		BOOL bSeekIFrame)
	:m_File(strPath), m_StartTime(startTime), m_SessionType(type), 
	 m_isFirstFrame(TRUE), m_MaxLength(maxLength), m_bSeekIFrame(bSeekIFrame)
	{
	}
public:
	MFHeader m_Header;
	MFTimePostionVector m_PostionVector;
	VdbFile m_File;
	unsigned int m_StartTime;
	MediaSessionType m_SessionType;
	unsigned int m_CurTimeIdx;
	unsigned int m_LastTime;
	unsigned int m_LastSeek;
	unsigned int m_LastRead;
	BOOL m_isFirstFrame;
	unsigned int m_MaxLength;
	BOOL m_bSeekIFrame;

	struct timeval m_ExpectTime;
	struct timeval m_LastFrameTime;
};


MediaFile::MediaFile(string & strPath, unsigned int startTime, MediaSessionType type, unsigned int maxLength, 
	BOOL bSeekIFrame)
{
	m_data = new MediaFileData(strPath, startTime, type, maxLength, bSeekIFrame);
	Init();
}

MediaFile::~MediaFile()
{
	if (m_data)
	{
		delete m_data;
	}
}

unsigned int MediaFile::GetEndTime()
{
	return m_data->m_LastTime;
}

BOOL MediaFile::Init()
{
	switch (m_data->m_SessionType)
	{
		case MEDIA_SESSION_RECORD:
		{
			InitWrite();
			break;
		}
		case MEDIA_SESSION_PLAYBACK:
		{
			InitRead();
			break;
		}
		default:
		{
			InitRead();
			break;
		}
	}
	
	return TRUE;
}

BOOL MediaFile::InitWrite()
{	
	m_data->m_Header.version = MF_VERSION;
	m_data->m_Header.startTime = m_data->m_StartTime;
	m_data->m_Header.endTime = m_data->m_StartTime;
	
	m_data->m_File.Lseek(0, SEEK_SET);
	m_data->m_File.Write(&m_data->m_Header, sizeof(m_data->m_Header));
	
	for (int i = 0; i < MF_TIME_POS; i ++)
	{
		m_data->m_PostionVector.postion[i] = MF_HEADER_LEN + i * (sizeof(int) * 2);
		m_data->m_PostionVector.timePostion[i].postion = 0;
		m_data->m_PostionVector.timePostion[i].time = 0;
	}
	/* Seek to the time postion */
	m_data->m_File.Lseek(MF_HEADER_LEN, SEEK_SET);
	m_data->m_File.Write(&(m_data->m_PostionVector.timePostion[0]), MF_TIME_POS_LEN);
	m_data->m_File.Lseek(MF_HEADER_LEN + MF_TIME_POS_LEN, SEEK_SET);
	m_data->m_CurTimeIdx = 0;
	m_data->m_LastTime = 0;
	m_data->m_LastSeek = MF_HEADER_LEN + MF_TIME_POS_LEN;
	
	return TRUE;
}

BOOL MediaFile::InitRead()
{
	m_data->m_File.Lseek(0, SEEK_SET);
	m_data->m_File.Read(&m_data->m_Header, sizeof(m_data->m_Header));
	
	for (int i = 0; i < MF_TIME_POS; i ++)
	{
		m_data->m_PostionVector.postion[i] = MF_HEADER_LEN + i * sizeof(int);
		m_data->m_PostionVector.timePostion[i].postion = 0;
		m_data->m_PostionVector.timePostion[i].time = 0;
	}
	/* Seek to the time postion */
	m_data->m_File.Lseek(MF_HEADER_LEN, SEEK_SET);
	m_data->m_File.Read(&(m_data->m_PostionVector.timePostion[0]), MF_TIME_POS_LEN);
	m_data->m_LastRead = MF_HEADER_LEN + MF_TIME_POS_LEN;
       if (m_data->m_Header.startTime == m_data->m_Header.endTime)
       {
               for (int i = 0; i < MF_TIME_POS; i ++)
               {
               	
               	if (m_data->m_PostionVector.timePostion[i].postion != 0 &&
               	                    m_data->m_PostionVector.timePostion[i].time != 0)
               	{
               	    m_data->m_Header.endTime = m_data->m_PostionVector.timePostion[i].time;
               	}
               }           
       }

       VDC_DEBUG("InitRead StartTime %d EndTime %d\n", m_data->m_Header.startTime, m_data->m_Header.endTime);

	if (m_data->m_bSeekIFrame == TRUE)
	{
		SeekToNextIFrame();
		VDC_DEBUG("InitRead Seek I frame\n");
	}
	return TRUE;
}

BOOL MediaFile::GetStartAndEndTime(unsigned int  &startTime, unsigned int &endTime)
{
    startTime = m_data->m_Header.startTime;
    endTime  = m_data->m_Header.endTime;
    return TRUE;
}


void DumpHexData(unsigned char *pNuf, int nLen)
{
    int i = 0;
    for (i = 0; i < nLen; i ++)
    {
		printf(" 0x%x", pNuf[i]);
    }
	printf("\n\n");
}


MFStatus MediaFile::GetAFrame(VideoFrame &pFrame, int &waiting)
{
    MFPktLink link;
    waiting = 0;
    struct timeval current;
    gettimeofday(&current, NULL);
    s64 waitTime = 0;
	
    m_data->m_File.Lseek(m_data->m_LastRead, SEEK_SET);
    m_data->m_File.Read(&link, sizeof(link));

    m_data->m_LastRead = link.next;
    //TODO check the dataBuf is enough
    if (link.next == 0 || link.dataLen == 0)
    {
        VDC_DEBUG("Read End Reached !\n");
        return MF_WRTIE_REACH_END;
    }
    m_data->m_File.Read(pFrame.dataBuf, link.dataLen);
    pFrame.dataLen = link.dataLen;


    pFrame.frameType  = (VideoFrameType)link.frameType;

    pFrame.streamType = (VideoStreamType)link.streamType;
    pFrame.secs = link.secs;
    pFrame.msecs = link.msecs;
    if (m_data->m_isFirstFrame == TRUE)
    {
        m_data->m_isFirstFrame = FALSE;
	 waiting = 0;
        m_data->m_LastFrameTime.tv_sec = pFrame.secs;
        m_data->m_LastFrameTime.tv_usec = pFrame.msecs * 1000;
	 m_data->m_ExpectTime.tv_sec = current.tv_sec;
	 m_data->m_ExpectTime.tv_usec = current.tv_usec;
	 return MF_OK;
    }

    s64 frameDiff = (s64)(((u64)pFrame.secs * 1000) + pFrame.msecs) 
        - (s64)((s64)m_data->m_LastFrameTime.tv_sec * 1000 + m_data->m_LastFrameTime.tv_usec/1000);
    
    s64 timeDiff = (s64)(((u64)current.tv_sec * 1000) + current.tv_usec /1000) 
        - (s64)((s64)m_data->m_ExpectTime.tv_sec * 1000 + m_data->m_ExpectTime.tv_usec/1000);
    //VDC_DEBUG("frameDiff %lld timeDiff %lld \n", frameDiff, timeDiff);
    //VDC_DEBUG("m_ExpectTime (%d, %d) current (%d, %d) streamtype %d\n", m_data->m_ExpectTime.tv_sec,
    //		m_data->m_ExpectTime.tv_usec, current.tv_sec, current.tv_usec, pFrame.streamType);
    //VDC_DEBUG("m_LastFrameTime (%d, %d) current frame (%d, %d)\n", m_data->m_LastFrameTime.tv_sec,
    //	m_data->m_LastFrameTime.tv_usec, pFrame.secs, pFrame.msecs * 1000);
    if (timeDiff <= 0)
    {
    	timeDiff = 0;
    }
    waitTime = frameDiff - timeDiff;
	
    //VDC_DEBUG("frameDiff %lld timeDiff %lld Time diff %lld\n", frameDiff, timeDiff, 
    //                waitTime);
    if (waitTime > 2000)
    {
    	VDC_DEBUG("frameDiff %lld timeDiff %lld Time diff %lld !!!\n", frameDiff, timeDiff, 
                    waitTime);
		waitTime = 1000;
    }

    if (waitTime > 0)
    {
        //Sleep(waitTime);
        waiting = waitTime;
    }
    else
    {
        waitTime = 0;
    }
        
    m_data->m_LastFrameTime.tv_sec = pFrame.secs;
    m_data->m_LastFrameTime.tv_usec = pFrame.msecs * 1000;
    struct timeval timeAdd;
    timeAdd.tv_sec = 0;
    timeAdd.tv_usec = waitTime * 1000;

    timeradd(&current, &timeAdd, &(m_data->m_ExpectTime));
    return MF_OK;
}

BOOL MediaFile::PauseForRead()
{
	m_data->m_isFirstFrame = TRUE; 
	return TRUE;
}

BOOL MediaFile::SeekToTime(unsigned int seekTime)
{
    VDC_DEBUG("SeekToTime Time %d start %d end %d\n", seekTime, 
                       m_data->m_Header.startTime,  m_data->m_Header.endTime);

    if (seekTime < m_data->m_Header.startTime || seekTime > m_data->m_Header.endTime)
    {
        return FALSE;
    }

    unsigned int TimeIdx = seekTime - m_data->m_Header.startTime;

    m_data->m_isFirstFrame = TRUE;
    m_data->m_LastRead = m_data->m_PostionVector.timePostion[TimeIdx].postion;
    if (SeekToNextIFrame() == FALSE)
    {
        return SeekToPreIFrame();
    }

    return TRUE;
    
}

BOOL MediaFile::SeekToNextIFrame()
{
    MFPktLink link;
    while (1)
    {
        m_data->m_File.Lseek(m_data->m_LastRead, SEEK_SET);
        m_data->m_File.Read(&link, sizeof(link));
        if (link.streamType == VIDEO_STREAM_VIDEO && 
            link.frameType == VIDEO_FRM_I)
        {
             return TRUE;
        }
        if (m_data->m_LastRead == link.next)
        {
            VDC_DEBUG("Read End Reached !\n");
            return FALSE;        
        }
        m_data->m_LastRead = link.next;  
        if (link.next == 0 || link.dataLen == 0)
        {
            VDC_DEBUG("Read End Reached !\n");
            return FALSE;
        }
    }

    return FALSE;
}
BOOL MediaFile::SeekToPreIFrame()
{
    MFPktLink link;
    while (1)
    {
        m_data->m_File.Lseek(m_data->m_LastRead, SEEK_SET);
        m_data->m_File.Read(&link, sizeof(link));
        if (link.streamType == VIDEO_STREAM_VIDEO && 
            link.frameType == VIDEO_FRM_I)
        {
             return TRUE;
        }
        if (m_data->m_LastRead == link.prev)
        {
            VDC_DEBUG("Read Start Reached !\n");
            return FALSE;        
        }    
        m_data->m_LastRead = link.prev;  
        if (link.prev== 0)
        {
            VDC_DEBUG("Read Start Reached !\n");
            return FALSE;
        }
    }

    return FALSE;
}

MFStatus MediaFile::PushAFrame(VideoFrame *pFrame)
{
	MFPktLink link;
	MFPktLink linkEnd;
	
	int timeDiff = pFrame->secs - m_data->m_StartTime;
	if (timeDiff < 0)
	{
		VDC_DEBUG("PushAFrame timeDiff < 0, just skip this Frame\n");
		return MF_FRAME_TIME_ERROR;
	}
	if ((m_data->m_LastSeek + sizeof(link) + pFrame->dataLen ) >= m_data->m_MaxLength)
	{
		VDC_DEBUG("Max Length Reached !\n");
		/* Write the end time to the file */
		m_data->m_File.Lseek(sizeof(unsigned int) * 2, SEEK_SET);
		m_data->m_File.Write(&m_data->m_LastTime, sizeof(unsigned int));
		return MF_WRTIE_REACH_END;	
	}
	
	/* First frame  */
	if (m_data->m_isFirstFrame == TRUE)
	{
		m_data->m_LastTime = pFrame->secs;
		m_data->m_PostionVector.timePostion[m_data->m_CurTimeIdx].time = pFrame->secs;
		m_data->m_PostionVector.timePostion[m_data->m_CurTimeIdx].postion = m_data->m_LastSeek;
		m_data->m_File.Lseek(m_data->m_PostionVector.postion[m_data->m_CurTimeIdx], SEEK_SET);
		m_data->m_File.Write(&(m_data->m_PostionVector.timePostion[m_data->m_CurTimeIdx]), sizeof(MFTimePostion));
		m_data->m_isFirstFrame = FALSE;
		link.prev = 0;
	}else
	{
		if (pFrame->secs - m_data->m_LastTime > 0)
		{
			m_data->m_CurTimeIdx ++;
			m_data->m_LastTime = pFrame->secs;
			m_data->m_PostionVector.timePostion[m_data->m_CurTimeIdx].time = pFrame->secs;
			m_data->m_PostionVector.timePostion[m_data->m_CurTimeIdx].postion = m_data->m_LastSeek;
			m_data->m_File.Lseek(m_data->m_PostionVector.postion[m_data->m_CurTimeIdx], SEEK_SET);
			m_data->m_File.Write(&(m_data->m_PostionVector.timePostion[m_data->m_CurTimeIdx]), sizeof(MFTimePostion));	
		}
		
		link.prev = m_data->m_LastSeek;
	}
	
	link.next = m_data->m_LastSeek + sizeof(link) + pFrame->dataLen;
	link.dataLen = pFrame->dataLen;
	link.streamType = pFrame->streamType;
	link.frameType = pFrame->frameType;
	link.secs = pFrame->secs;
	link.msecs = pFrame->msecs;

       /* Every 2 second flash the end time to the  */
       if (pFrame->secs - m_data->m_Header.startTime >= 2)
        {
              m_data->m_File.Lseek(0, SEEK_SET);
              m_data->m_Header.endTime = pFrame->secs;
              m_data->m_File.Write(&m_data->m_Header, sizeof(m_data->m_Header));
        }
	
	/* Remember the last frame postion */
	m_data->m_File.Lseek(m_data->m_LastSeek, SEEK_SET);
	m_data->m_File.Write(&link, sizeof(link));
	m_data->m_File.Write(pFrame->dataBuf, pFrame->dataLen);
	m_data->m_LastSeek = link.next;
	
	/* Write a end link */
	linkEnd.prev = m_data->m_LastSeek;
	linkEnd.dataLen = 0;
	linkEnd.streamType = 0;
	linkEnd.frameType = 0;
	linkEnd.secs = 0;
	linkEnd.msecs = 0;
	m_data->m_File.Write(&linkEnd, sizeof(linkEnd));
	
	
	return MF_OK;
}

