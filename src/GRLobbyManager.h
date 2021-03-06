/*
GameRanger
GRLobbyManager.h

Copyright (C) 2004 xoclipse (xoclipse@cox.net)

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef GRLOBBYMANAGER_H
#define GRLOBBYMANAGER_H

#include "GRBaseDefs.h"
#include "GRLobby.h"

class GRMainConnection;

using namespace std;

class GRLobbyManager {
public:
	GRLobbyManager(GRMainConnection *conn);
	~GRLobbyManager();
	
	/* Delete All Lobbies */
	void deleteAll();

	/* Add Lobby */
	void addLobby(GRLobby *lobby);

	/* Set Current Lobby */
	void setCurrentLobby(wxUint32 lobbyID);

	/* Get current lobby */
	GRLobby *getCurrentLobby();

	/* Find a lobby */
	GRLobby *findLobby(wxUint32 lobbyID);

private:
	vector <GRLobby*> Lobbies;

	/* Main Connection */
	GRMainConnection *conn;

	/* Current Lobby */
	GRLobby *currentLobby;
};

#endif
