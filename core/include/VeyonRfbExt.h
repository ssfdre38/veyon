/*
 * VeyonRfbExt.h - an extension of the RFB-protocol, used for communication
 *                 between master and clients
 *
 * Copyright (c) 2004-2017 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 *
 * This file is part of Veyon - http://veyon.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef VEYON_RFB_EXT_H
#define VEYON_RFB_EXT_H

typedef struct _rfbClient rfbClient;

// new rfb command which tells server or client that an veyon feature message is following
#define rfbVeyonFeatureMessage		41


#define rfbSecTypeVeyon 40

enum PortOffsets
{
	PortOffsetComputerControlServer = 11100,
	PortOffsetVncServer = PortOffsetComputerControlServer+100,
	PortOffsetFeatureManagerPort = PortOffsetComputerControlServer+200,
	PortOffsetDemoServer = PortOffsetComputerControlServer+300,
} ;

#ifdef __cplusplus
extern "C"
{
#endif
void handleSecTypeVeyon( rfbClient *client );
#ifdef __cplusplus
}
#endif

#endif
