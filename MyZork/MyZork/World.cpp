

/*#include <stdio.h>
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

void World::CreateWorld() const{

	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[OBSERVATORY].name, "The Observatory");
	strcpy_s(rooms[OBSERVATORY].description, "This room is full of extrange devices. There's a giant telescope. There's a table in the mid of the room, in the top of the table a misterious black scroll waits to be taken... The only entrance is in the east.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[OBSERVATORY_direction_N].description, "There's a wall.");
	exits[OBSERVATORY_direction_N].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORY_direction_N].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORY_direction_W].description, "There's a wall.");
	exits[OBSERVATORY_direction_W].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORY_direction_W].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[OBSERVATORY_direction_E].description, "It's a long corridor with some sinister stairs.");
	exits[OBSERVATORY_direction_E].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORY_direction_E].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[OBSERVATORY_direction_S].description, "There's a wall.");
	exits[OBSERVATORY_direction_S].origin = &rooms[OBSERVATORY];
	exits[OBSERVATORY_direction_S].destination = &rooms[OBSERVATORY];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[NORTHTEMPLE].name, "The North Temple");
	strcpy_s(rooms[NORTHTEMPLE].description, "This room is a cold one, it's dusty and all the walls are made of stone. There's a little key shinning in the floor. There are entrances in the west and the east.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[NORTHTEMPLE_direction_N].description, "There's a wall.");
	exits[NORTHTEMPLE_direction_N].origin = &rooms[NORTHTEMPLE];
	exits[NORTHTEMPLE_direction_N].destination = &rooms[NORTHTEMPLE];
	strcpy_s(exits[NORTHTEMPLE_direction_W].description, "It's a long corridor with some sinister stairs.");
	exits[NORTHTEMPLE_direction_W].origin = &rooms[NORTHTEMPLE];
	exits[NORTHTEMPLE_direction_W].destination = &rooms[OBSERVATORY];
	strcpy_s(exits[NORTHTEMPLE_direction_E].description, "It's a long and dark corridor, a smell of death cames from it.");
	exits[NORTHTEMPLE_direction_E].origin = &rooms[NORTHTEMPLE];
	exits[NORTHTEMPLE_direction_E].destination = &rooms[HEADMASTERSROOM];
	exits[NORTHTEMPLE_direction_E].door = true;
	exits[NORTHTEMPLE_direction_E].close = true;
	strcpy_s(exits[NORTHTEMPLE_direction_S].description, "It's a long corridor full of vegetation.");
	exits[NORTHTEMPLE_direction_S].origin = &rooms[NORTHTEMPLE];
	exits[NORTHTEMPLE_direction_S].destination = &rooms[FOUNTAINROOM];
	exits[NORTHTEMPLE_direction_S].door = true;
	exits[NORTHTEMPLE_direction_S].close = true;
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[HEADMASTERSROOM].name, "The Headmaster's Room");
	strcpy_s(rooms[HEADMASTERSROOM].description, "This is The Headmaster's Room, it's a big room and the angry Headmaster is staring at you! The only entrance is on the west.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[HEADMASTERSROOM_direction_N].description, "There's a wall.");
	exits[HEADMASTERSROOM_direction_N].origin = &rooms[HEADMASTERSROOM];
	exits[HEADMASTERSROOM_direction_N].destination = &rooms[HEADMASTERSROOM];
	strcpy_s(exits[HEADMASTERSROOM_direction_W].description, "It's a long and dark corridor, a smell of death cames from it.");
	exits[HEADMASTERSROOM_direction_W].origin = &rooms[HEADMASTERSROOM];
	exits[HEADMASTERSROOM_direction_W].destination = &rooms[NORTHTEMPLE];
	exits[HEADMASTERSROOM_direction_W].door = true;
	exits[HEADMASTERSROOM_direction_W].close = true;
	strcpy_s(exits[HEADMASTERSROOM_direction_E].description, "There's a wall.");
	exits[HEADMASTERSROOM_direction_E].origin = &rooms[HEADMASTERSROOM];
	exits[HEADMASTERSROOM_direction_E].destination = &rooms[HEADMASTERSROOM];
	strcpy_s(exits[HEADMASTERSROOM_direction_S].description, "There's a wall.");
	exits[HEADMASTERSROOM_direction_S].origin = &rooms[HEADMASTERSROOM];
	exits[HEADMASTERSROOM_direction_S].destination = &rooms[HEADMASTERSROOM];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[WESTTEMPLE].name, "The West Temple");
	strcpy_s(rooms[WESTTEMPLE].description, "This room is full of weapons. It was an old armery, there's a iron sword there. There are entrances in the south and in the east.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[WESTTEMPLE_direction_N].description, "There's a wall.");
	exits[WESTTEMPLE_direction_N].origin = &rooms[WESTTEMPLE];
	exits[WESTTEMPLE_direction_N].destination = &rooms[WESTTEMPLE];
	strcpy_s(exits[WESTTEMPLE_direction_W].description, "There's a wall.");
	exits[WESTTEMPLE_direction_W].origin = &rooms[WESTTEMPLE];
	exits[WESTTEMPLE_direction_W].destination = &rooms[WESTTEMPLE];
	strcpy_s(exits[WESTTEMPLE_direction_E].description, "It's a long dusty corridor.");
	exits[WESTTEMPLE_direction_E].origin = &rooms[WESTTEMPLE];
	exits[WESTTEMPLE_direction_E].destination = &rooms[FOUNTAINROOM];
	strcpy_s(exits[WESTTEMPLE_direction_S].description, "It's a dusty corridor with some torches in the wall.");
	exits[WESTTEMPLE_direction_S].origin = &rooms[WESTTEMPLE];
	exits[WESTTEMPLE_direction_S].destination = &rooms[GARDEN];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[FOUNTAINROOM].name, "The Fountain Room");
	strcpy_s(rooms[FOUNTAINROOM].description, "This room is an open aired room, full of fountains. There is a merchant in the middle of the room. There are entrances in the north, the west, the east and in the south.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[FOUNTAINROOM_direction_N].description, "It's a long corridor full of vegetation.");
	exits[FOUNTAINROOM_direction_N].origin = &rooms[FOUNTAINROOM];
	exits[FOUNTAINROOM_direction_N].destination = &rooms[NORTHTEMPLE];
	exits[FOUNTAINROOM_direction_N].door = true;
	exits[FOUNTAINROOM_direction_N].close = true;
	strcpy_s(exits[FOUNTAINROOM_direction_W].description, "It's a long dusty corridor.");
	exits[FOUNTAINROOM_direction_W].origin = &rooms[FOUNTAINROOM];
	exits[FOUNTAINROOM_direction_W].destination = &rooms[WESTTEMPLE];
	strcpy_s(exits[FOUNTAINROOM_direction_E].description, "It's a dusty corridor.");
	exits[FOUNTAINROOM_direction_E].origin = &rooms[FOUNTAINROOM];
	exits[FOUNTAINROOM_direction_E].destination = &rooms[EASTTEMPLE];
	strcpy_s(exits[FOUNTAINROOM_direction_S].description, "It's a well illuminated corridor.");
	exits[FOUNTAINROOM_direction_S].origin = &rooms[FOUNTAINROOM];
	exits[FOUNTAINROOM_direction_S].destination = &rooms[SOUTHTEMPLE];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[EASTTEMPLE].name, "The East Temple");
	strcpy_s(rooms[EASTTEMPLE].description, "This room is full of extrange devices. There's a giant cupboard closed, inside of it there's a big staff. There are entrances in the west, and in the south.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[EASTTEMPLE_direction_N].description, "There's a wall.");
	exits[EASTTEMPLE_direction_N].origin = &rooms[EASTTEMPLE];
	exits[EASTTEMPLE_direction_N].destination = &rooms[EASTTEMPLE];
	strcpy_s(exits[EASTTEMPLE_direction_W].description, "It's a dusty corridor.");
	exits[EASTTEMPLE_direction_W].origin = &rooms[EASTTEMPLE];
	exits[EASTTEMPLE_direction_W].destination = &rooms[FOUNTAINROOM];
	strcpy_s(exits[EASTTEMPLE_direction_E].description, "There's a wall.");
	exits[EASTTEMPLE_direction_E].origin = &rooms[EASTTEMPLE];
	exits[EASTTEMPLE_direction_E].destination = &rooms[EASTTEMPLE];
	strcpy_s(exits[EASTTEMPLE_direction_S].description, "It's a dark corridor with a little illumination from some torches.");
	exits[EASTTEMPLE_direction_S].origin = &rooms[EASTTEMPLE];
	exits[EASTTEMPLE_direction_S].destination = &rooms[LIBRARY];
	exits[EASTTEMPLE_direction_S].door = true;
	exits[EASTTEMPLE_direction_S].close = true;
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[GARDEN].name, "The Garden");
	strcpy_s(rooms[GARDEN].description, "This room is an open aired room. There's a few vegetation and some animals, the teacher is in the middle of the garden, maybe he has something to say... There are entrances in the north, and in the east.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[GARDEN_direction_N].description, "It's a dusty corridor with some torches in the wall.");
	exits[GARDEN_direction_N].origin = &rooms[GARDEN];
	exits[GARDEN_direction_N].destination = &rooms[WESTTEMPLE];
	strcpy_s(exits[GARDEN_direction_W].description, "There's a wall.");
	exits[GARDEN_direction_W].origin = &rooms[GARDEN];
	exits[GARDEN_direction_W].destination = &rooms[GARDEN];
	strcpy_s(exits[GARDEN_direction_E].description, "It's a long well illuminated corridor.");
	exits[GARDEN_direction_E].origin = &rooms[GARDEN];
	exits[GARDEN_direction_E].destination = &rooms[SOUTHTEMPLE];
	strcpy_s(exits[GARDEN_direction_S].description, "There's a wall.");
	exits[GARDEN_direction_S].origin = &rooms[GARDEN];
	exits[GARDEN_direction_S].destination = &rooms[GARDEN];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[SOUTHTEMPLE].name, "The South Temple");
	strcpy_s(rooms[SOUTHTEMPLE].description, "This room is a well illuminated room prepared for magic battles. There is an angry sourcerer staring at you. There are entrances in the north, in the west and in the east.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[SOUTHTEMPLE_direction_N].description, "It's a well illuminated corridor.");
	exits[SOUTHTEMPLE_direction_N].origin = &rooms[SOUTHTEMPLE];
	exits[SOUTHTEMPLE_direction_N].destination = &rooms[FOUNTAINROOM];
	strcpy_s(exits[SOUTHTEMPLE_direction_W].description, "It's a long well illuminated corridor.");
	exits[SOUTHTEMPLE_direction_W].origin = &rooms[SOUTHTEMPLE];
	exits[SOUTHTEMPLE_direction_W].destination = &rooms[GARDEN];
	strcpy_s(exits[SOUTHTEMPLE_direction_E].description, "It's a long dark corridor with a little illumination from some torches.");
	exits[SOUTHTEMPLE_direction_E].origin = &rooms[SOUTHTEMPLE];
	exits[SOUTHTEMPLE_direction_E].destination = &rooms[LIBRARY];
	exits[SOUTHTEMPLE_direction_E].door = true;
	exits[SOUTHTEMPLE_direction_E].close = true;
	strcpy_s(exits[SOUTHTEMPLE_direction_S].description, "There's a wall.");
	exits[SOUTHTEMPLE_direction_S].origin = &rooms[SOUTHTEMPLE];
	exits[SOUTHTEMPLE_direction_S].destination = &rooms[SOUTHTEMPLE];
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(rooms[LIBRARY].name, "The Library");
	strcpy_s(rooms[LIBRARY].description, "This room is a library, it is obviously full of books. The librarian is in the middle of the room, maybe she has some information... There are entrances in the north, and in the west.");
	// ---------------------------------------------------------------------------------------------------------------
	strcpy_s(exits[LIBRARY_direction_N].description, "It's a dark corridor with a little illumination from some torches.");
	exits[LIBRARY_direction_N].origin = &rooms[LIBRARY];
	exits[LIBRARY_direction_N].destination = &rooms[EASTTEMPLE];
	exits[LIBRARY_direction_N].door = true;
	exits[LIBRARY_direction_N].close = true;
	strcpy_s(exits[LIBRARY_direction_W].description, "It's a long dark corridor with a little illumination from some torches.");
	exits[LIBRARY_direction_W].origin = &rooms[LIBRARY];
	exits[LIBRARY_direction_W].destination = &rooms[SOUTHTEMPLE];
	exits[LIBRARY_direction_W].door = true;
	exits[LIBRARY_direction_W].close = true;
	strcpy_s(exits[LIBRARY_direction_E].description, "There's a wall.");
	exits[LIBRARY_direction_E].origin = &rooms[LIBRARY];
	exits[LIBRARY_direction_E].destination = &rooms[LIBRARY];
	strcpy_s(exits[LIBRARY_direction_S].description, "There's a wall.");
	exits[LIBRARY_direction_S].origin = &rooms[LIBRARY];
	exits[LIBRARY_direction_S].destination = &rooms[LIBRARY];
	// ---------------------------------------------------------------------------------------------------------------

}

void World::Move(int &position, char option_move[]) const
{
	int i = 0, j = 0;

	player->player_position = &rooms[position];

	if (strcmp(option_move, "go") == 0)
	{
		printf("Which direction do you want to go? ");
		gets_s(option_move, 20);
	}

	if (strcmp(option_move, "n") == 0 || strcmp(option_move, "north") == 0 || strcmp(option_move, "go north") == 0 || strcmp(option_move, "go n") == 0)
	{
		for (i = 0; i < 36; i++)
		{
			if (i % 4 == 0)
			{
				if (exits[i].origin == player->player_position)
				{
					for (j = 0; j < 9; j++)
					{
						if (exits[i].destination == &rooms[j])
						{
							if (exits[i].door == true && exits[i].close == true)
							{
								printf("\nThere's a door and it's locked.\n\n");
								return;
							}

							else if (exits[i].origin == exits[i].destination)
							
							{
								printf("\nThere's a wall here.\n\n");
								return;
							}

							else

							{
								position = j;
								player->player_position = exits[i].destination;
								printf("\nNow you are in %s.\n", player->player_position);
								return;
							}
						}
					}
				}
			}
		}
		printf("\nThere's a wall.\n");
	}

	else if (strcmp(option_move, "w") == 0 || strcmp(option_move, "west") == 0 || strcmp(option_move, "go west") == 0 || strcmp(option_move, "go w") == 0)
	{
		for (i = 0; i < 36; i++)
		{
			if (i % 4 == 1)
			{
				if (exits[i].origin == player->player_position)
				{
					for (j = 0; j < 9; j++)
					{
						if (exits[i].destination == &rooms[j])
						{
							if (exits[i].door == true && exits[i].close == true)
							{
								printf("\nThere's a door and it's locked.\n\n");
								return;
							}

							else if (exits[i].origin == exits[i].destination)

							{
								printf("\nThere's a wall here.\n\n");
								return;
							}

							else

							{
								position = j;
								player->player_position = exits[i].destination;
								printf("\nNow you are in %s.\n", player->player_position);
								return;
							}
						}
					}
				}
			}
		}
		printf("\nThere's a wall.\n");
	}

	else if (strcmp(option_move, "e") == 0 || strcmp(option_move, "east") == 0 || strcmp(option_move, "go east") == 0 || strcmp(option_move, "go e") == 0)
	{
		for (i = 0; i < 36; i++)
		{
			if (i % 4 == 2)
			{
				if (exits[i].origin == player->player_position)
				{
					for (j = 0; j < 9; j++)
					{
						if (exits[i].destination == &rooms[j])
						{
							if (exits[i].door == true && exits[i].close == true)
							{
								printf("\nThere's a door and it's locked.\n\n");
								return;
							}

							else if (exits[i].origin == exits[i].destination)

							{
								printf("\nThere's a wall here.\n\n");
								return;
							}

							else

							{
								position = j;
								player->player_position = exits[i].destination;
								printf("\nNow you are in %s.\n", player->player_position);
								return;
							}
						}
					}
				}
			}
		}
		printf("\nThere's a wall.\n");
	}

	else if (strcmp(option_move, "s") == 0 || strcmp(option_move, "south") == 0 || strcmp(option_move, "go south") == 0 || strcmp(option_move, "go s") == 0)
	{
		for (i = 0; i < 36; i++)
		{
			if (i % 4 == 3)
			{
				if (exits[i].origin == player->player_position)
				{
					for (j = 0; j < 9; j++)
					{
						if (exits[i].destination == &rooms[j])
						{
							if (exits[i].door == true && exits[i].close == true)
							{
								printf("\nThere's a door and it's locked.\n\n");
								return;
							}

							else if (exits[i].origin == exits[i].destination)

							{
								printf("\nThere's a wall here.\n\n");
								return;
							}

							else

							{
								position = j;
								player->player_position = exits[i].destination;
								printf("\nNow you are in %s.\n", player->player_position);
								return;
							}
						}
					}
				}
			}
		}
		printf("\nThere's a wall.\n");
	}
}

void World::Look(int &position, char direction[]) const
{

	int i;
	player->player_position = (rooms + position);

	if (strcmp(direction, "look") == 0)
	{
		printf("\n%s\n%s\n", (rooms + position)->name, (rooms + position)->description);
	}

	else if (strcmp(direction, "look north") == 0 || strcmp(direction, "north") == 0 || strcmp(direction, "look n") == 0)
	{
		for (i = 0; i < 36; i++){
			if (i % 4 == 0){
				if (exits[i].origin == player->player_position){
					printf("\n%s\n", exits[i].description);
					return;
				}
			}
		}
	}

	else if (strcmp(direction, "look west") == 0 || strcmp(direction, "west") == 0 || strcmp(direction, "look w") == 0)
	{
		for (i = 0; i < 36; i++){
			if (i % 4 == 1){
				if (exits[i].origin == player->player_position){
					printf("\n%s\n", exits[i].description);
					return;
				}
			}
		}
	}

	else if (strcmp(direction, "look east") == 0 || strcmp(direction, "east") == 0 || strcmp(direction, "look e") == 0)
	{
		for (i = 0; i < 36; i++){
			if (i % 4 == 2){
				if (exits[i].origin == player->player_position){
					printf("\n%s\n", exits[i].description);
					return;
				}
			}
		}
	}

	else if (strcmp(direction, "look south") == 0 || strcmp(direction, "south") == 0 || strcmp(direction, "look s") == 0)
	{
		for (i = 0; i < 36; i++){
			if (i % 4 == 3){
				if (exits[i].origin == player->player_position){
					printf("\n%s\n", exits[i].description);
					return;
				}
			}
		}
	}

	else
	{
		printf("\nInvalid command.\n");
	}

}

void World::Open(int &position, char direction[]) const
{

	int i, j;

	if (strcmp(direction, "open north") == 0 || strcmp(direction, "open n") == 0)
	{
		for (i = 0; i < 36; i++){
			if (strcmp(exits[i].origin->name, player->player_position->name) == 0){
				if (i % 4 == 0){
					if (exits[i].door == true){
						if (exits[i].close == true){
							exits[i].close = false;
							for (j = 0; j < 36; j++){
								if (j % 4 == 3){
									if (exits[j].destination->name == exits[i].origin->name){
										exits[j].close = false;
										printf("The door is opened.\n");
										return;
									}
								}
							}
						}
						else{
							printf("The door was already opened.\n");
							break;
						}
					}
					else{
						printf("There is not a door here.\n");
						break;
					}
				}
			}
		}
	}

	else if (strcmp(direction, "open west") == 0 || strcmp(direction, "open w") == 0)
	{
		for (i = 0; i < 36; i++){
			if (strcmp(exits[i].origin->name, player->player_position->name) == 0){
				if (i % 4 == 1){
					if (exits[i].door == true){
						if (exits[i].close == true){
							exits[i].close = false;
							for (j = 0; j < 36; j++){
								if (j % 4 == 2){
									if (exits[j].destination->name == exits[i].origin->name){
										exits[j].close = false;
										printf("The door is opened.\n");
										return;
									}
								}
							}
						}
						else{
							printf("The door was already opened.\n");
							break;
						}
					}
					else{
						printf("There is not a door here.\n");
						break;
					}
				}
			}
		}
	}

	else if (strcmp(direction, "open east") == 0 || strcmp(direction, "open e") == 0)
	{
		for (i = 0; i < 36; i++){
			if (strcmp(exits[i].origin->name, player->player_position->name) == 0){
				if (i % 4 == 2){
					if (exits[i].door == true){
						if (exits[i].close == true){
							exits[i].close = false;
							for (j = 0; j < 36; j++){
								if (j % 4 == 1){
									if (exits[j].destination->name == exits[i].origin->name){
										exits[j].close = false;
										printf("The door is opened.\n");
										return;
									}
								}
							}
						}
						else{
							printf("The door was already opened.\n");
							break;
						}
					}
					else{
						printf("There is not a door here.\n");
						break;
					}
				}
			}
		}
	}

	else if (strcmp(direction, "open south") == 0 || strcmp(direction, "open s") == 0)
	{
		for (i = 0; i < 36; i++){
			if (strcmp(exits[i].origin->name, player->player_position->name) == 0){
				if (i % 4 == 3){
					if (exits[i].door == true){
						if (exits[i].close == true){
							exits[i].close = false;
							for (j = 0; j < 36; j++){
								if (j % 4 == 0){
									if (exits[j].destination->name == exits[i].origin->name){
										exits[j].close = false;
										printf("The door is opened.\n");
										return;
									}
								}
							}
						}
						else{
							printf("The door was already opened.\n");
							break;
						}
					}
					else{
						printf("There is not a door here.\n");
						break;
					}
				}
			}
		}
	}
}

void World::Close(int &position, char direction[]) const
{

	int i, j;

	if (strcmp(direction, "close north") == 0 || strcmp(direction, "close n") == 0)
	{
		for (i = 0; i < 36; i++){
			if (strcmp(exits[i].origin->name, player->player_position->name) == 0){
				if (i % 4 == 0){
					if (exits[i].door == true){
						if (exits[i].close == false){
							exits[i].close = true;
							for (j = 0; j < 36; j++){
								if (j % 4 == 3){
									if (exits[j].destination->name == exits[i].origin->name){
										exits[j].close = true;
										printf("The door is closed.\n");
										return;
									}
								}
							}
						}
						else{
							printf("The door was already closed.\n");
							break;
						}
					}
					else{
						printf("There is not a door here.\n");
						break;
					}
				}
			}
		}
	}

	else if (strcmp(direction, "close west") == 0 || strcmp(direction, "close w") == 0)
	{
		for (i = 0; i < 36; i++){
			if (strcmp(exits[i].origin->name, player->player_position->name) == 0){
				if (i % 4 == 1){
					if (exits[i].door == true){
						if (exits[i].close == false){
							exits[i].close = true;
							for (j = 0; j < 36; j++){
								if (j % 4 == 2){
									if (exits[j].destination->name == exits[i].origin->name){
										exits[j].close = true;
										printf("The door is closed.\n");
										return;
									}
								}
							}
						}
						else{
							printf("The door was already closed.\n");
							break;
						}
					}
					else{
						printf("There is not a door here.\n");
						break;
					}
				}
			}
		}
	}
	else if (strcmp(direction, "close east") == 0 || strcmp(direction, "close e") == 0)
	{
		for (i = 0; i < 36; i++){
			if (strcmp(exits[i].origin->name, player->player_position->name) == 0){
				if (i % 4 == 2){
					if (exits[i].door == true){
						if (exits[i].close == false){
							exits[i].close = true;
							for (j = 0; j < 36; j++){
								if (j % 4 == 1){
									if (exits[j].destination->name == exits[i].origin->name){
										exits[j].close = true;
										printf("The door is closed.\n");
										return;
									}
								}
							}
						}
						else{
							printf("The door was already closed.\n");
							break;
						}
					}
					else{
						printf("There is not a door here.\n");
						break;
					}
				}
			}
		}
	}
	else if (strcmp(direction, "close south") == 0 || strcmp(direction, "close s") == 0)
	{
		for (i = 0; i < 36; i++){
			if (strcmp(exits[i].origin->name, player->player_position->name) == 0){
				if (i % 4 == 3){
					if (exits[i].door == true){
						if (exits[i].close == false){
							exits[i].close = true;
							for (j = 0; j < 36; j++){
								if (j % 4 == 0){
									if (exits[j].destination->name == exits[i].origin->name){
										exits[j].close = true;
										printf("The door is closed.\n");
										return;
									}
								}
							}
						}
						else{
							printf("The door was already closed.\n");
							break;
						}
					}
					else{
						printf("There is not a door here.\n");
						break;
					}
				}
			}
		}
	}
}

void World::Help() const
{

	printf("\nINSTRUCTIONS:\n");
	printf("The commands that you can use are: go/look/open/close/help/quit.\n");
	printf("To specify the direction you want: north/weast/east/south/n/w/e/s\n");
	printf("Use look to know where you are, use look + direction to look a corridor\n");

}*/