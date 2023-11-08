#pragma once
#include<vector>
#include<string>

using namespace std;

class House
{
private:
	vector<char> rooms;
public:
	House(Room room);
	House(vector<Room> room);
	House(float w, float l, float h);

	addroom(Room room);
	addroom(float w, float l, float h);

	delroom(string name);
};

