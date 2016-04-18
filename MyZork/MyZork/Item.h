#ifndef __Item__
#define __Item__

#include "Entity.h"
#include "Room.h"
#include "Exit.h"

class Item:public Entity
{

public:

	Item();
	Item(const char*, const char*, Room*, int, bool, bool, bool, bool, bool);
	~Item();

public:

	Room* item_room = nullptr;

public:

	int attack;
	bool inventory = false;
	bool equipped = false;
	bool equipable = false;
	bool inside_cupboard = true;
	bool inside_backpack = false;

};

#endif