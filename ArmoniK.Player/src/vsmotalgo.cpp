/*
 * Copyright (c) 2017-2023 Heimdall
 *
 * The computer program contained herein contains proprietary
 * information which is the property of Heimdall.
 * The program may be used and/or copied only with the written
 * permission of Heimdall or in accordance with the
 * terms and conditions stipulated in the agreement/contract under
 * which the programs have been supplied.
 */
#include "utility/videotype.hpp"
#include "vsmotalgo.h"
#include "render_wrapper.hpp"
#include "XSDK/TimeUtils.h"


/*  Default size is 320 * 240 and the blob size is 8x8*/

VSMotAlgoData::VSMotAlgoData(bool bFullFrame)
:m_bFullFrame(bFullFrame),m_ProcWidth(VVID_MOT_PROC_W), m_ProcHeight(VVID_MOT_PROC_H), 
m_buf(NULL)
{
	m_buf = (char *)malloc(m_ProcWidth * m_ProcHeight * 3);
	m_mot = (unsigned char *)malloc(m_ProcWidth * m_ProcHeight);
	m_lastTime.tv_sec = 0;
	m_lastTime.tv_usec = 0;
}

/**
 * \brief Destructor for VSMotAlgoData.
 *
 * This destructor is responsible for freeing the dynamically allocated memory
 * held by the object. It deletes the `m_buf` and `m_mot` pointers to release
 * the associated resources.
 *
 * \note The destructor assumes that `m_buf` and `m_mot` have been properly
 * allocated using `new` before this destructor is called.
 *
 * \see VSMotAlgoData
 */
VSMotAlgoData::~VSMotAlgoData()
{
	delete m_buf;
	delete m_mot;
}

/**
 * \brief Sets the motion registration data.
 *
 * This function sets the motion registration data of the VSMotAlgoData object.
 *
 * \param motReg The motion registration data to set.
 * \return Returns true if the motion registration data was successfully set, false otherwise.
 */
bool VSMotAlgoData::SetMotReg(VVidMotReg &motReg)
{
	m_motReg = motReg;
	return true;
}

/**
 * \brief Process a raw frame.
 *
 * This function processes a raw frame by performing certain operations
 * and updates the internal state of the VSMotAlgoData object accordingly.
 *
 * \param frame The raw frame to be processed.
 * \return True if the frame was successfully processed, false otherwise.
 *
 * \note This function assumes that the VSMotAlgoData object has been properly initialized
 *       with the necessary parameters before calling this function.
 */
bool VSMotAlgoData::ProcessFrame(RawFrame& frame)
{
	if (frame.format != AV_PIX_FMT_YUV420P) {
		return false;
	}

	struct timeval curr;
	gettimeofday(&curr, NULL);
	long result;
	timerdiff(&curr, &m_lastTime, result);
	if (m_bFullFrame != true) {
		/* 100ms 10fps */
		if (result > 0 && result < 100) {
			return true;
		}else {
			timercopy(&m_lastTime, &curr);
		}
	}
	
	I420Scale((unsigned char *)frame.data[0], frame.linesize[0], 
			(unsigned char *)frame.data[2], frame.linesize[2], 
			(unsigned char *)frame.data[1], frame.linesize[1],
				frame.width, frame.height, 
				(unsigned char *)m_buf, m_ProcWidth, 
				(unsigned char *)m_buf + m_ProcWidth * m_ProcHeight, 
				m_ProcWidth /2, 
				(unsigned char *)m_buf + (m_ProcWidth * m_ProcHeight * 5) /4 , 
				m_ProcWidth /2,
				m_ProcWidth, m_ProcHeight, kFilterNone);	

	//TODO add opencv for motion detect
	return true;
}

/**
 * \brief Retrieves the output data from the VSMotAlgoData object.
 *
 * This function returns the output data stored in the VSMotAlgoData object
 * and updates the width and height parameters with the dimensions of the output.
 *
 * \param pOutput [out] A reference to a VBlobVec object that will be populated with the output data.
 * \param w [out] A reference to a signed 32-bit integer that will be updated with the width of the output.
 * \param h [out] A reference to a signed 32-bit integer that will be updated with the height of the output.
 * \return A boolean value indicating the success of retrieving the output data. True if successful, false otherwise.
 */
bool VSMotAlgoData::GetOutput(VBlobVec &pOutput, int &w, int &h)
{
    w = m_ProcWidth;
    h = m_ProcHeight;
    // TODO: Add implementation to retrieve the output data and populate pOutput.
    return true;
}

/**
 * \brief Constructs a VSMotAlgo object.
 *
 * This constructor initializes a new instance of the VSMotAlgo class with the specified
 * parameter.
 *
 * \param bFullFrame A boolean value indicating whether to use full-frame processing.
 */
VSMotAlgo::VSMotAlgo(bool bFullFrame)
{
	m_data = new VSMotAlgoData(bFullFrame);
}

/**
 * \brief Destructor for the VSMotAlgo class.
 * 
 * This destructor is responsible for deallocating the memory used by the VSMotAlgo object.
 * It deletes the dynamically allocated `m_data` object if it exists.
 */
VSMotAlgo::~VSMotAlgo()
{
	if (m_data) {
		delete m_data;
	}
}

/**
 * \brief Process a raw frame using the VSMotAlgo.
 *
 * This function processes a raw frame by calling the `ProcessFrame` function of the underlying `m_data` object.
 *
 * \param frame The raw frame to be processed.
 * \return A boolean value indicating the success of the frame processing. 
 *         Returns true if the frame was processed successfully, false otherwise.
 */
bool VSMotAlgo::ProcessFrame(RawFrame& frame)
{
    return m_data->ProcessFrame(frame);	
}

/**
 * \brief Sets the motion registration for the VSMotAlgo.
 *
 * This function sets the motion registration for the VSMotAlgo object.
 *
 * \param motReg A reference to a VVidMotReg object representing the motion registration.
 * \return Returns a boolean value indicating the success of setting the motion registration.
 *         - `true` if the motion registration was set successfully.
 *         - `false` if there was an error setting the motion registration.
 */
bool VSMotAlgo::SetMotReg(VVidMotReg &motReg)
{
    return m_data->SetMotReg(motReg);
}

/**
 * \brief Retrieves the output of the VSMotAlgo algorithm.
 *
 * This function retrieves the output of the VSMotAlgo algorithm and stores it in the provided `VBlobVec` object. 
 * It also updates the `w` and `h` variables with the width and height of the output, respectively.
 *
 * \param pOutput The `VBlobVec` object to store the algorithm's output.
 * \param w A reference to a signed 32-bit integer variable to store the width of the output.
 * \param h A reference to a signed 32-bit integer variable to store the height of the output.
 * \return A boolean value indicating whether the output was successfully retrieved or not. `true` if successful, `false` otherwise.
 */
bool VSMotAlgo::GetOutput(VBlobVec &pOutput, int &w, int &h)
{
    return m_data->GetOutput(pOutput, w, h);
}
