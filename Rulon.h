#pragma once
#include<string>

using namespace std;

class Rulon
{
private:
	float width;
	float len;
	float cost;
	string name;
public:
	Rulon(string n, float c, float w, float l);
	void setCost(float newCost);

	float getwidth();
	float gatlen();
	string getname();
	float getCost();
};

