#include "place.h"

//default constructor
place::place()
{
	x = y = -1;
}

//constructor to create place object
place::place(int xloc, int yloc)
{
	x = xloc;
	y = yloc;
}

int place::getX() const
{
	return x;
}

int place::getY() const
{
	return y;
}

