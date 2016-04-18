#ifndef __Room__
#define __Room__

#include "Entity.h"

class Room:public Entity
{
public:

	Room();
	Room(const char*, const char*, bool);
	~Room();

public:

	bool cupboard = false;
	
};

#endif

/*
#ifndef __Room__
#define __Room__

class Room
{

public:

	char name[40];
	char description[500];

public:

	Room();
	~Room();

};

enum Rooms{ OBSERVATORY, NORTHTEMPLE, HEADMASTERSROOM, WESTTEMPLE, FOUNTAINROOM, EASTTEMPLE, GARDEN, SOUTHTEMPLE, LIBRARY }; //We enum the rooms, we will have to have in count the valors of the enum

#endif
*/