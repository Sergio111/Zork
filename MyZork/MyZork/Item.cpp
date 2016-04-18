#include "Item.h"

Item::Item()
{
}

Item::Item(const char* name, const char* description, Room* item_room, int attack, bool inventory, bool equipped, bool equipable, bool inside_cupboard, bool inside_backpack):Entity(name, description), item_room(item_room), attack(attack), inventory(inventory), equipped(equipped), equipable(equipable), inside_cupboard(inside_cupboard), inside_backpack(inside_backpack)
{
}

Item::~Item()
{
}