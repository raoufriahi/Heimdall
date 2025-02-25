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
#pragma once

#if defined(WIN32)
#if defined(VE_EXPORTS)
	#define VE_LIBRARY_API __declspec(dllexport)
#else
	#define VE_LIBRARY_API __declspec(dllimport)
#endif
#else
	#define VE_LIBRARY_API
#endif

#define UB_LIBRARY_API