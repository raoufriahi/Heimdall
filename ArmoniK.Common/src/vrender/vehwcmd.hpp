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
#ifndef __VE_HW_CMD_H_
#define __VE_HW_CMD_H_

#include "utility/utility.hpp"
#include "utility/debug.hpp"

#undef DLL_SYMBOL
#define DLL_SYMBOL              //__declspec(dllexport)

#undef CDECL_SYMBOL
#define CDECL_SYMBOL            //__cdecl

#undef EXTERN_SYMBOL
#define EXTERN_SYMBOL           extern
#define uint8_t unsigned char 

#define DISABLE_COVER 1

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct {
    uint8_t *buffer;
    size_t  size;
} copy_cache_t;

#ifdef _MSC_VER
# define ve_memalign(align, size) (_aligned_malloc(size, align))
# define ve_free(base)            (_aligned_free(base))
#endif

#  define VLC_CPU_SSE    0x00000040
#  define VLC_CPU_SSE2   0x00000080
#  define VLC_CPU_SSE3   0x00000100
#  define VLC_CPU_SSSE3  0x00000200
#  define VLC_CPU_SSE4_1 0x00000400
#  define VLC_CPU_SSE4_2 0x00000800
#define VLC_CPU_SSE_ALL VLC_CPU_SSE  | VLC_CPU_SSE2 | VLC_CPU_SSE3 | VLC_CPU_SSSE3 | VLC_CPU_SSE4_1 | VLC_CPU_SSE4_2


EXTERN_SYMBOL DLL_SYMBOL int CDECL_SYMBOL CopyInitCache(copy_cache_t *cache, unsigned width);
EXTERN_SYMBOL void CopyCleanCache(copy_cache_t *cache);

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_CopyFromUswc(uint8_t *dst, size_t dst_pitch,
                         const uint8_t *src, size_t src_pitch,
                         unsigned width, unsigned height,
                         unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_Copy2d(uint8_t *dst, size_t dst_pitch,
                   const uint8_t *src, size_t src_pitch,
                   unsigned width, unsigned height);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_SplitUV(uint8_t *dstu, size_t dstu_pitch,
                        uint8_t *dstv, size_t dstv_pitch,
                        const uint8_t *src, size_t src_pitch,
                        unsigned width, unsigned height, unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_CopyPlane(uint8_t *dst, size_t dst_pitch,
                          const uint8_t *src, size_t src_pitch,
                          uint8_t *cache, size_t cache_size,
                          unsigned width, unsigned height, unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_SplitPlanes(uint8_t *dstu, size_t dstu_pitch,
                            uint8_t *dstv, size_t dstv_pitch,
                            const uint8_t *src, size_t src_pitch,
                            uint8_t *cache, size_t cache_size,
                            unsigned width, unsigned height, unsigned cpu);
#if 0
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_CopyFromNv12(picture_t *dst,
                             uint8_t *src[2], size_t src_pitch[2],
                             unsigned width, unsigned height,
                             copy_cache_t *cache, unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_CopyFromYv12(picture_t *dst,
                             uint8_t *src[3], size_t src_pitch[3],
                             unsigned width, unsigned height,
                             copy_cache_t *cache, unsigned cpu);
#endif
#ifdef __cplusplus
}
#endif // __cplusplus

#undef uint8_t

#endif /* __VE_HW_CMD_H_ */
