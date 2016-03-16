#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "World.h"
#include "Player.h"
#include "Room.h"
#include "Exit.h"

int main()
{
	char option[20];
	int position = 4; //Set initial position to rooms[4](FOUNTAINROOM)

	World world;
	world.CreateWorld();

	printf("\nThis game is called 'The magic academy adventure'\nIt's an interactive textual game in which you have to explore \nfind items and defeat some enemies.\n");
	printf("In this game you are an apprentice in a wizard's accademy, your objective is to gain power and be the most powerfull one\n");
	printf("\nINSTRUCTIONS:\n");
	printf("The commands that you can use are: go/look/open/close/help/quit.\n");
	printf("To specify the direction you want: north/weast/east/south/n/w/e/s\n");
	printf("Use look to know where you are, use look + direction to look a corridor\n");
	printf("\nIt is the moment to start your trial!\n");
	printf("\nYou are in The Fountain Room\n");
	printf("This room is an open aired room, full of fountains. There is a merchant in the middle of the room. There are entrances in the north, the west, the east and in the south.\n");

	do
	{

		printf("\n- ");
		gets_s(option, 20);

		if (strcmp(option, "go") == 0 || strcmp(option, "n") == 0 || strcmp(option, "w") == 0 || strcmp(option, "e") == 0 || strcmp(option, "s") == 0 ||
			strcmp(option, "north") == 0 || strcmp(option, "west") == 0 || strcmp(option, "east") == 0 || strcmp(option, "south") == 0 ||
			strcmp(option, "go north") == 0 || strcmp(option, "go west") == 0 || strcmp(option, "go east") == 0 || strcmp(option, "go south") == 0 ||
			strcmp(option, "go n") == 0 || strcmp(option, "go w") == 0 || strcmp(option, "go e") == 0 || strcmp(option, "go s") == 0)
		{
			world.Move(position, option);
			printf("%s\n%s\n", world.player->player_position->name, world.player->player_position->description);
		}
		else if (strcmp(option, "look") == 0 || strcmp(option, "look n") == 0 || strcmp(option, "look w") == 0 || strcmp(option, "look e") == 0 || strcmp(option, "look s") == 0 ||
			strcmp(option, "look north") == 0 || strcmp(option, "look west") == 0 || strcmp(option, "look east") == 0 || strcmp(option, "look south") == 0)
		{
			world.Look(position, option);
		}
		else if (strcmp(option, "open north") == 0 || strcmp(option, "open n") == 0 || strcmp(option, "open west") == 0 || strcmp(option, "open w") == 0 || strcmp(option, "open east") == 0 ||
			strcmp(option, "open e") == 0 || strcmp(option, "open south") == 0 || strcmp(option, "open s") == 0)
		{
			world.Open(position, option);
		}
		else if (strcmp(option, "close north") == 0 || strcmp(option, "close n") == 0 || strcmp(option, "close west") == 0 || strcmp(option, "close w") == 0 || strcmp(option, "close east") == 0 ||
			strcmp(option, "close e") == 0 || strcmp(option, "close south") == 0 || strcmp(option, "close s") == 0)
		{
			world.Close(position, option);
		}
		else if (strcmp(option, "help") == 0)
		{
			world.Help();
		}
		else if (strcmp(option, "quit") != 0)
		{
			printf("\nInvalid command, please repeat again:\n");
		}

	} while (strcmp(option, "quit") != 0);


	getchar();
	return 0;
}