#ifdef _WIN32
/*
 * PLEASE NOTE: 
 * 
 * This file is automatically generated by tag_dll.awk.
 * It contains magic required by Win32 DLLs to initialize
 * tag_typedef_t variables.
 * 
 * Do not, repeat, do not edit this file. Edit 'sdp_tag.c' instead.
 * 
 */

#define EXPORT __declspec(dllexport)

/*
 * This file is part of the Sofia-SIP package
 *
 * Copyright (C) 2005 Nokia Corporation.
 *
 * Contact: Pekka Pessi <pekka.pessi@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

/**@internal
 * @file sdp_tag.c
 * @brief SDP Tags
 *
 * @author Pekka Pessi <Pekka.Pessi@nokia.com>
 *
 * @date Created: Mon May 12 12:11:30 2003 ppessi
 *
 */

#include "config.h"

#include <stddef.h>

#undef TAG_NAMESPACE
#define TAG_NAMESPACE "sdp"

#define TAG_NAMESPACE "sdp"

#include <sofia-sip/sdp_tag.h>

tag_typedef_t sdptag_any;

EXPORT tag_typedef_t sdptag_session_ref;
tag_typedef_t sdptag_session;
  TAG_NAMESPACE, "session", sdptag_session_class
}};

#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hInst, DWORD fwdReason, LPVOID fImpLoad)
{
  tag_typedef_t _sdptag_session = {{
  tag_typedef_t _sdptag_session_ref =
    REFTAG_TYPEDEF(sdptag_session);
  tag_typedef_t _sdptag_any = NSTAG_TYPEDEF(*);
  tag_typedef_t _sdptag_any_ref =
    REFTAG_TYPEDEF(sdptag_any);

  *(struct tag_type_s *)sdptag_session = *_sdptag_session;
  *(struct tag_type_s *)sdptag_session_ref = *_sdptag_session_ref;
  *(struct tag_type_s *)sdptag_any = *_sdptag_any;
  *(struct tag_type_s *)sdptag_any_ref = *_sdptag_any_ref;

  return TRUE;
}

#endif
