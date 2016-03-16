#ifndef __Exit__
#define __Exit__

#include "room.h"

class Exit{

public:

	char name[40];
	char description[500];
	Room* origin;
	Room* destination;
	bool close = false;
	bool door = false;

public:

	Exit();
	~Exit();

};

enum Directions{

	OBSERVATORY_direction_N,
	OBSERVATORY_direction_W,
	OBSERVATORY_direction_E,
	OBSERVATORY_direction_S,

	// ----------------

	NORTHTEMPLE_direction_N,
	NORTHTEMPLE_direction_W,
	NORTHTEMPLE_direction_E,
	NORTHTEMPLE_direction_S,

	// ----------------

	HEADMASTERSROOM_direction_N,
	HEADMASTERSROOM_direction_W,
	HEADMASTERSROOM_direction_E,
	HEADMASTERSROOM_direction_S,

	// ----------------

	WESTTEMPLE_direction_N,
	WESTTEMPLE_direction_W,
	WESTTEMPLE_direction_E,
	WESTTEMPLE_direction_S,

	// ----------------

	FOUNTAINROOM_direction_N,
	FOUNTAINROOM_direction_W,
	FOUNTAINROOM_direction_E,
	FOUNTAINROOM_direction_S,

	// ----------------

	EASTTEMPLE_direction_N,
	EASTTEMPLE_direction_W,
	EASTTEMPLE_direction_E,
	EASTTEMPLE_direction_S,

	// ----------------

	GARDEN_direction_N,
	GARDEN_direction_W,
	GARDEN_direction_E,
	GARDEN_direction_S,

	// ----------------

	SOUTHTEMPLE_direction_N,
	SOUTHTEMPLE_direction_W,
	SOUTHTEMPLE_direction_E,
	SOUTHTEMPLE_direction_S,

	// ----------------

	LIBRARY_direction_N,
	LIBRARY_direction_W,
	LIBRARY_direction_E,
	LIBRARY_direction_S

};

#endif