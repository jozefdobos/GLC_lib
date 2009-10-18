/****************************************************************************

 This file is part of the GLC-lib library.
 Copyright (C) 2005-2008 Laurent Ribon (laumaya@users.sourceforge.net)
 Version 1.2.0, packaged on September 2009.

 http://glc-lib.sourceforge.net

 GLC-lib is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 GLC-lib is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with GLC-lib; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

*****************************************************************************/

//! \file glc_config.h the GLC_lib configuration file

#ifndef GLC_CONFIG_H
#define GLC_CONFIG_H

// Win 32 DLL export macros
#ifdef Q_OS_WIN32
# ifndef GLC_LIB_STATIC
#   define GLC_LIB_EXPORT  __declspec(dllexport)
# endif
#endif // Q_OS_WIN32

// For other architectures, this macro is empty
#ifndef GLC_LIB_EXPORT
# define GLC_LIB_EXPORT
#endif

#endif // GLC_CONFIG_H
