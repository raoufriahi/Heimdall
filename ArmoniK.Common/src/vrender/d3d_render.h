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
#ifndef __D3D_RENDER_H__
#define __D3D_RENDER_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

#include "video_render.h"

#include "fast_mutex.h"
#include "vehwcmd.hpp"
#include "internal.h"
#include "vvideodraw.hpp"
using namespace tthread;

typedef struct {
	unsigned int  mplayer_fmt;   /**< Given by MPlayer */
	D3DFORMAT     fourcc;        /**< Required by D3D's test function */
} struct_fmt_table;


extern struct_fmt_table fmt_table[];

#define DISPLAY_FORMAT_TABLE_ENTRIES (sizeof(fmt_table) / sizeof(fmt_table[0]))

class d3d_render
	: public video_render
{
public:
	d3d_render(BOOL bHWAccel);
	virtual ~d3d_render();

public:
	virtual bool init_render(void* ctx, int w, int h, int pix_fmt);

	virtual bool render_one_frame(RenderFrame* data, int pix_fmt);

	virtual void re_size(int width, int height);

	virtual void aspect_ratio(int srcw, int srch, bool enable_aspect);

	virtual void destory_render();

private:
	void fill_d3d_presentparams(D3DPRESENT_PARAMETERS *present_params);
	bool configure_d3d();
	void destroy_d3d_surfaces();
	bool create_d3d_surfaces();
	int query_format(uint32_t movie_fmt);

private:
	LPDIRECT3D9 m_d3d_handle;                 /**< Direct3D Handle */
	LPDIRECT3DDEVICE9 m_d3d_device;           /**< The Direct3D Adapter */
	LPDIRECT3DSURFACE9 m_d3d_surface;         /**< Offscreen Direct3D Surface. */
	LPDIRECT3DSURFACE9 m_d3d_backbuf;         /**< Video card's back buffer (used to display next frame) */
	D3DLOCKED_RECT m_locked_rect;             /**< The locked offscreen surface */
	D3DFORMAT m_desktop_fmt;                  /**< Desktop (screen) colorspace format. */
	D3DFORMAT m_movie_src_fmt;                /**< Movie colorspace format (depends on the movie's codec) */
	D3DPRESENT_PARAMETERS m_present_params;
	RECT m_last_client_rect;

	int m_cur_backbuf_width;         /**< Current backbuffer width */
	int m_cur_backbuf_height;        /**< Current backbuffer height */

	HWND m_hwnd;
	int m_image_width;
	int m_image_height;

	bool m_keep_aspect;

	float m_window_aspect;
    fast_mutex m_Lock;
	bool m_last_error;

	copy_cache_t m_pCache;
	DWORD m_BehaviorFlags;
	BOOL m_bHWAccel;
};

#endif // __D3D_RENDER_H__

