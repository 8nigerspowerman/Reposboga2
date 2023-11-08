#include "Rulon.h"
#include<string>

using namespace std;

Rulon::Rulon(string n, float c, float w, float l) {
	width = w;
	len = l;
	name = n;
	cost = c;
}

void setCost(float newCost) {
	if (cost > 0) cost = newCost;
}

float getwidth() { return width };
float getlen() { return len };
float getname() { return name };
float getCost() { return cost };