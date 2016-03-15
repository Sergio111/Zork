#ifndef __World__
#define __World__

#include <string.h>
#include "Room.h"
#include "Player.h"
#include "Exit.h"

class World{

	Room* rooms = nullptr;
	Exit* exits = nullptr;
	Player* player = nullptr;

public:

	World();
	~World();

public:

	void CreateWorld();

};

#endif //__World__