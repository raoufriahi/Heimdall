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
#ifndef __INTERNAL_H__
#define __INTERNAL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>

#include <set>
#include <map>
#include <list>
#include <algorithm>

extern "C"
{
#include "libswscale/swscale.h"
#include "libavcodec/avcodec.h"
}

#include <windows.h>
#include <gl\gl.h>
#include <gl\glu.h>

#include <ddraw.h>
#include <d3d9.h>

#include <MMSystem.h>
#include <dsound.h>

#endif // __INTERNAL_H__
