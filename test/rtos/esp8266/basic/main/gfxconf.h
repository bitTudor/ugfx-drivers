/*
 * Copyright (c) 2012, 2013, Joel Bodenmann aka Tectu <joel@unormal.org>
 * Copyright (c) 2012, 2013, Andrew Hannam aka inmarket
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *    * Neither the name of the <organization> nor the
 *      names of its contributors may be used to endorse or promote products
 *      derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _GFXCONF_H
#define _GFXCONF_H

/* The operating system to use. One of these must be defined - preferably in your Makefile */
//#define GFX_USE_OS_CHIBIOS	FALSE
//#define GFX_USE_OS_WIN32		FALSE
//#define GFX_USE_OS_LINUX		FALSE
//#define GFX_USE_OS_OSX		FALSE

// setting this cuz duh, ESP32 is FreeRTOS
#define GFX_USE_OS_FREERTOS     TRUE
// setting this since we explicitly call gfxInit ourselves
#define GFX_OS_NO_INIT          TRUE
// setting this since we are 100% sure about our gfxInit call
//#define GFX_OS_INIT_NO_WARNING  TRUE

/* GFX sub-systems to turn on */
#define GFX_USE_GDISP			TRUE
#define GFX_USE_GMISC           TRUE

/* Features for the GDISP sub-system. */
#define GDISP_NEED_VALIDATION	TRUE
#define GDISP_NEED_CLIP			TRUE
#define GDISP_NEED_CONVEX_POLYGON TRUE

/* For this demo define either:
 * 		GMISC_NEED_MATRIXFLOAT2D		to use floating point math operations
 *
 * 		or
 *
 * 		GMISC_NEED_MATRIXFIXED2D		to use fixed point math operations.
 *
 * If you choose floating point you may optionally define GMISC_NEED_FASTTRIG.
 * If you choose fixed point you MUST define GMISC_NEED_FIXEDTRIG for this demo.
 */

//#define GMISC_NEED_FASTTRIG                          TRUE
//#define GMISC_NEED_MATRIXFLOAT2D                     TRUE

#define GMISC_NEED_FIXEDTRIG                         TRUE
#define GMISC_NEED_MATRIXFIXED2D                     TRUE

#define GDISP_NEED_AUTOFLUSH    TRUE

#endif /* _GFXCONF_H */

