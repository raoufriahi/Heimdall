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
#include "vdb.hpp"
#include "license.hpp"


VDB::VDB(string & strPath)
: m_IndexDB(strPath), /* m_EventDB(strPath), */ m_Mode(RECORDING_FULL_LOOP)
{
	this->m_pThread = new tthread::thread(VDB::Run, (void *)this);
}

VDB::~VDB()
{
	m_bExit = true;
	m_pThread->join();
	delete m_pThread;
	m_pThread = NULL;
}

BOOL VDB::SetRecordingMode(RecordingMode mode)
{
   m_Mode = mode;
   return TRUE;
}

void VDB::Lock()
{
	m_Lock.lock();
}

void VDB::UnLock()
{
	m_Lock.unlock();
}

BOOL VDB::GetDiskMap(VDBDiskMap &pMap)
{
	Lock();
	BOOL ret =  m_IndexDB.GetDiskMap(pMap);
	UnLock();
	return ret;
}

BOOL VDB::GetDiskStatus(VDBDiskStatus &pStatus)
{
	Lock();
	BOOL ret =  m_IndexDB.GetDiskStatus(pStatus);
	UnLock();
	return ret;
}

BOOL VDB::UpdateDiskStatusMap(VDBDiskStatus &pMap)
{
	Lock();
	BOOL ret =  m_IndexDB.UpdateDiskStatusMap(pMap);
	UnLock();
	return ret;
}

BOOL VDB::AddHdd(string &strHdd, string & strPath, long nSize)
{
	Lock();
	BOOL ret =  m_IndexDB.AddHdd(strHdd, strPath, nSize);
	UnLock();
	return ret;
}
BOOL VDB::DelHdd(string & strHdd)
{
	Lock();
	BOOL ret =  m_IndexDB.DelHdd(strHdd);
	UnLock();
	return ret;
}

BOOL VDB::HddUpdateSize(string &strHdd, long nSize)
{
	Lock();
	BOOL ret =  m_IndexDB.HddUpdateSize(strHdd, nSize);
	UnLock();
	return ret;
}

/* video search function, if startTime or endTime is 0, it mean all */
BOOL VDB::SearchItems(string deviceId, unsigned int startTime, unsigned int endTime, unsigned int recordType, 
				RecordItemMap & pMap)
{
	Lock();
	BOOL ret =  m_IndexDB.SearchItems(deviceId, startTime, endTime, 
											recordType, pMap);
	UnLock();
	return ret;
}

/* video search function, if startTime or endTime is 0, it mean all */
BOOL VDB::SearchHasItems(string deviceId, unsigned int startTime, unsigned int endTime, unsigned int recordType)
{
	Lock();
	BOOL ret =  m_IndexDB.SearchHasItems(deviceId, startTime, endTime, 
											recordType);
	UnLock();
	return ret;
}

BOOL VDB::SearchAItem(string deviceId, unsigned int Time, VdbRecordItem &pItem)
{
	Lock();
	BOOL ret =  m_IndexDB.SearchAItem(deviceId, Time, pItem);
	UnLock();
	return ret;
}

BOOL VDB::SearchAItemNear(string deviceId, unsigned int Time, VdbRecordItem &pItem)
{
	Lock();
	BOOL ret =  m_IndexDB.SearchAItemNear(deviceId, Time, pItem);
	UnLock();
	return ret;
}

BOOL VDB::SearchNextItem(string deviceId, long LastId, VdbRecordItem &pItem)
{
	Lock();
	BOOL ret =  m_IndexDB.SearchNextItem(deviceId, LastId, pItem);
	UnLock();
	return ret;
}

BOOL VDB::RequestAMFRead(VdbRecordItem &pItem, string & strPath)
{
	Lock();
	BOOL ret = FALSE;
	m_IndexDB.GetRecordFilePath(pItem, strPath);
	if (strPath.length() > 0)
	{
		ret = m_IndexDB.RecordRLock(strPath);
	}
	UnLock();
	return ret;	
}

BOOL VDB::FinishedAMFRead(VdbRecordItem &pItem, string  &strPath)
{
	Lock();
	BOOL ret = m_IndexDB.RecordRUnLock(strPath);
	UnLock();
	return ret;
}

 void VDB::Run(void * pParam)
{
	int dummy = errno;
	VDB * pThread = (VDB *)pParam;

	if (pThread)
	{
	    pThread->Run1();
	}
}

 
void VDB::Run1()
{
	while(1)
	{
		int ret = m_IndexDB.MergeSingleStep();
		ve_sleep(ret);
	}
}

/* The Task will merge type with real items, and pre record is based on the file */
BOOL VDB::AddSchedItem(string deviceId, long startTime, long endTime, RecordingType recordType)
{
	Lock();
	BOOL ret =  m_IndexDB.AddSchedItem(deviceId, startTime, endTime, recordType);
	UnLock();
	return ret;
}

RecordSession * VDB::StartRecord(string deviceId, unsigned int startTime, unsigned int recordType)
{
	string strBlockPath;
	
	Lock();
	if (m_IndexDB.RequestABlockFile(strBlockPath) != TRUE)
	{
	       if (m_Mode == RECORDING_FULL_STOP)
	        {
				VDC_DEBUG("Can not RequestABlockFile \n");
				UnLock();
				return NULL;
	        }else
	        {
	            
	            VDC_DEBUG("Recording loop mode \n");
                   if (m_IndexDB.GetAOldRecord(strBlockPath) == false)
                   {
				VDC_DEBUG("Can not Start Record \n");
				UnLock();
				return NULL;                   	
                   }
                    
	        }
	}
	if (LicRecordRef() == false)
	{
		VDC_DEBUG("Need License !\n");
		UnLock();
		return NULL;
	}
	
	long recordId = m_IndexDB.AddRecord(deviceId, recordType, startTime, strBlockPath);
	m_IndexDB.RecordWLock(strBlockPath);
	UnLock();
	
	return new RecordSession(deviceId, strBlockPath, startTime, recordId);
}

BOOL VDB::FinishRecord(RecordSession * pRs)
{
	long recordId = pRs->GetRecordId(); 
	unsigned int endTime = pRs->GetEndTime();
	LicRecordUnRef();
   	Lock();
	
	
	m_IndexDB.UpdateRecordEndtime(recordId, endTime);
	m_IndexDB.RecordWUnLock(pRs->GetBlockPath());
	UnLock();
	
	return TRUE;
}

/*VDBPrivate is thread from Qt, it timely get QStorageInfo list and set to m_IndexDB
m_IndexDB will use this from request block that disk is OK, for disk is not OK, just SIKP
for the block is not is the HDD list, just remove. 

Delete the disk: just delete the HDD from the list, and then all the write and read next time 
will skip this disk.

all the block is alloc when used. different with current

add a new class for hadoop recording.
*/
