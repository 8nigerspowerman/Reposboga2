#pragma once
#include<string>
using namespace std;

class Room {
private:
    float width;
    float len;
    float height;
public:
    string name;
    bool Up;

    Room(float w, float h, float l);
    float getwidth();
    float getlen();
    float getheight();

    void setwidth(float w);
    void setlen(float l);
    void setheight(float h);

    float getswall();
};

