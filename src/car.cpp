#include "car.h"

car::car(int x, int y, char dir)
{
    location = place(x,y);
    direction = dir;
    status = '0';
    size = -1;
}