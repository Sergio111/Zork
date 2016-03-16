#ifndef __World__
#define __World__

#include <string.h>
#include "Room.h"
#include "Player.h"
#include "Exit.h"

class World{

public:

	Room* rooms = nullptr;
	Exit* exits = nullptr;
	Player* player = nullptr;

public:

	World();
	~World();

public:

	void CreateWorld() const;
	void Look(int&, char[]);
	void Movement(int&, char[]);
	void Help();

};

#endif