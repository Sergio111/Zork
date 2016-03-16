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

enum Rooms{ OBSERVATORY, NORTHTEMPLE, HEADMASTERSROOM, WESTTEMPLE, FOUNTAINROOM, EASTTEMPLE, GARDEN, SOUTHTEMPLE, LIBRARY };

#endif