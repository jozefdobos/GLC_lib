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

#ifndef GLC_3DWIDGETMANAGER_H_
#define GLC_3DWIDGETMANAGER_H_

#include "glc_3dwidgetmanagerhandle.h"

#include "../glc_config.h"

class GLC_LIB_EXPORT GLC_3DWidgetManager
{
//////////////////////////////////////////////////////////////////////
/*! @name Constructor / Destructor */
//@{
//////////////////////////////////////////////////////////////////////
public:

	//! Construct the 3d widget manager associted to the given Viewport
	GLC_3DWidgetManager(GLC_Viewport* pViewport);

	//! Construct a 3d widget manager from the given 3D widget manager
	GLC_3DWidgetManager(const GLC_3DWidgetManager& widgetManager);

	//! Destructor
	~GLC_3DWidgetManager();
//@}

//////////////////////////////////////////////////////////////////////
/*! \name Set Functions*/
//@{
//////////////////////////////////////////////////////////////////////
public:
	//! Add the given 3D widget into this manager
	inline void add3DWidget(GLC_3DWidget* p3DWidget)
	{m_pWidgetManagerHandle->add3DWidget(p3DWidget);}

	//! Remove the 3D widget with the given id from this manager
	/*! Associated 3D view instance are removed*/
	inline void remove3DWidget(GLC_uint id)
	{m_pWidgetManagerHandle->remove3DWidget(id);}

//@}
//////////////////////////////////////////////////////////////////////
/*! \name Interaction Functions*/
//@{
//////////////////////////////////////////////////////////////////////
public:
	//! Recieve Mouse double click event with the given instance id
	void mouseDoubleClickEvent(QMouseEvent * pEvent, GLC_uint instanceId= 0);

	//! Recieve Mouse move event with the given instance id
	void mouseMoveEvent(QMouseEvent * pEvent, GLC_uint instanceId= 0);

	//! Recieve Mouse press event with the given instance id
	void mousePressEvent(QMouseEvent * pEvent, GLC_uint instanceId= 0);

	//! Recieve Mouse release event with the given instance id
	void mouseReleaseEvent(QMouseEvent * pEvent, GLC_uint instanceId= 0);

//@}
//////////////////////////////////////////////////////////////////////
// Private Member
//////////////////////////////////////////////////////////////////////
private:
	//! The widget manager handle
	GLC_3DWidgetManagerHandle* m_pWidgetManagerHandle;

};

#endif /* GLC_3DWIDGETMANAGER_H_ */