#include "Room.h"

Room::Room(float w, float l, float h) {
	width = w;
	len = l;
	height = h;
	name = "room";
	Up = false;
}

float Room::getwidth() { return width; }
float Room::getheight() { return height; }
float Room::getlen() { return len; }

void Room::setwidth(float w) {
	if (w > 0) width = w;
}
void Room::setheight(float h) {
	if (h > 0) height = h;
}
void Room::setlen(float l) {
	if (l > 0) len = l;
}

float Room::getswall() {
	if (Up) return 2 * width * height + 2 * len * height + height * width;
	else return 2 * width * height + 2 * len * height;
}