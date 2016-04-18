#include "Room.h"
Room::Room()
{}

Room::Room(const char* name, const char* description, bool cupboard):Entity(name, description), cupboard(cupboard)
{}

Room::~Room()
{}