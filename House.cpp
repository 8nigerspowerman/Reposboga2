#include "House.h"

House::House(Room room) {
	rooms.push_back(room);
}

House::House(vector<Room> room) {
	for (int i = 0; i < room.size(); i++) rooms.push_back(i);
}

House::House(float w, float l, float h) {
	Room room(w, l, h);
	rooms.push_back(room);
}

void House::addroom(Room room) {
}
void House::addroom(float w, float l, float h) {
}

void House::delroom(string name) {
	int index;
	for (int i = 0; i < rooms.size(); i++) {
		if (rooms[i].name == name) {
			index = i;
			break;
		}
	}
	rooms.erase(index);
}