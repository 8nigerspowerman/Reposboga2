#include <iostream>

using namespace std;


class Room {
private:
    float width;
    float len;
    float height;
public:
    Room(float w, float h, float l);
    float getwidth();
    float getlen();
    float getheight();

    void setwidth(float w);
    void setlen(float l);
    void setheight(float h);

    float getswall();
};

int main()
{
    std::cout << "Hello World!\n";
}