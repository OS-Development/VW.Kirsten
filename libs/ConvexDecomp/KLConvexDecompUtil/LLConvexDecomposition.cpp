/** 
 * @file   LLConvexDecomposition.cpp
 * @author falcon@lindenlab.com
 * @brief  A stub implementation of LLConvexDecomposition interface
 *
 * $LicenseInfo:firstyear=2002&license=viewerlgpl$
 * Second Life Viewer Source Code
 * Copyright (C) 2010, Linden Research, Inc.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation;
 * version 2.1 of the License only.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 * 
 * Linden Research, Inc., 945 Battery Street, San Francisco, CA  94111  USA
 * $/LicenseInfo$
 */

#if defined(WIN32)
#	include "windowsincludes.h"
#endif

#ifndef NULL
#define NULL 0 
#endif

#include "LLConvexDecompositionStubImpl.h"

#include "LLConvexDecomposition.h"


/*static */bool LLConvexDecomposition::s_isInitialized = false;

/*static*/LLConvexDecomposition* LLConvexDecomposition::getInstance()
{
	if ( !s_isInitialized )
	{
		return NULL;
	}
	else
	{
		return LLConvexDecompositionImpl::getInstance();
	}
}

/*static */LLCDResult LLConvexDecomposition::initSystem()
{
	LLCDResult result = LLConvexDecompositionImpl::initSystem();
	if ( result == LLCD_OK )
	{
		s_isInitialized = true;
	}
	return result;
}

/*static */LLCDResult LLConvexDecomposition::initThread()
{
	return LLConvexDecompositionImpl::initThread();
}

/*static */LLCDResult LLConvexDecomposition::quitThread()
{
	return LLConvexDecompositionImpl::quitThread();
}

/*static */LLCDResult LLConvexDecomposition::quitSystem()
{
	return LLConvexDecompositionImpl::quitSystem();
}

