#ifndef __Player__
#define __Player__

#include "Room.h"

class Player
{
public:

	Room* player_position = nullptr;

public:

	Player();
	~Player();

public:

	unsigned int playerhp = 100;
	unsigned int playerattack = 0;

public:

	int check_firstcommand(Vector <String>)const;
	int check_secondcommand(Vector <String>)const;
	int check_thirdcommand(Vector <String>)const;
	int check_fourthcommand(Vector <String>)const;
	void dropitemslook()const;
	void command1word(int&, int&)const;
	void command2word(int, int, int&)const;
	void command4word(int, int, int, int, int&)const;

};

enum rooms
{

	OBSERVATORY, NORTHTEMPLE, HEADMASTERSROOM, WESTTEMPLE, FOUNTAINROOM, EASTTEMPLE, GARDEN, SOUTHTEMPLE, LIBRARY

};

enum commandset 
{

	LOOK, GO, OPEN, CLOSE, QUIT, HELP,
	NORTH, EAST, SOUTH, WEST,
	PICK, DROP, INVENTORY, EQUIPPED, EQUIP, UNEQUIP, PUT, GET, INTO, FROM, STATS, BACKPACKED,
	SWORD, POWERSTAFF, SCROLLOFFIRE, SCROLLOFWATER, SCROLLOFLIGHT, SCROLLOFDEATH, KEY, BACKPACK,
	CUPBOARD,
	USE,
	CLEAR,
	COMMANDERROR

};

#endif

/*#ifndef __Player__
#define __Player__

#include "Room.h"

class Player
{

public:

	Room* player_position = nullptr;

public:

	Player();
	~Player();

};

#endif*/