#include <stdio.h>
#include <string.h>
#include "World.h"

World::World(){
	rooms = new Room[9];
	exits = new Exit[36];
	player = new Player;
}
World::~World(){
	delete[] rooms;
	delete[] exits;
	delete player;
}

void World::CreateWorld(){
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken...");
	strcpy_s(exits[OBSERVATORYdirectionN].description, "There's a wall.");
	exits[OBSERVATORYdirectionN].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionN].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionW].description, "There's a wall.");
	exits[OBSERVATORYdirectionW].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionW].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORYdirectionE].description, "There's a long corridor with some sinister stairs.");
	exits[OBSERVATORYdirectionE].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionE].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORYdirectionS].description, "There's a wall.");
	exits[OBSERVATORYdirectionS].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORYdirectionS].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
}