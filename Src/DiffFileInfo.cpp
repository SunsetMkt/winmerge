/////////////////////////////////////////////////////////////////////////////
//    License (GPLv2+):
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or (at
//    your option) any later version.
//    
//    This program is distributed in the hope that it will be useful, but
//    WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
/////////////////////////////////////////////////////////////////////////////
/** 
 * @file  DiffFileInfo.cpp
 *
 * @brief Implementation for DiffFileInfo routines
 */
// ID line follows -- this is updated by SVN
// $Id$

#include "DiffFileInfo.h"
#ifdef _WIN32
#include <windows.h>
#endif
#include "DirItem.h"
#include "UnicodeString.h"

/**
 * @brief Clears FileInfo data.
 */
void DiffFileInfo::ClearPartial()
{
	DirItem::ClearPartial();
	bVersionChecked = false;
	encoding.Clear();
	m_textStats.clear();
}

/**
 * @brief Return true if file is in any Unicode encoding
 */
bool DiffFileInfo::IsEditableEncoding() const
{
	return encoding.m_bom == false;
}
