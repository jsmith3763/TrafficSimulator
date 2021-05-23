#include "place.h"

//default constructor
place::place()
{
	//N = S = E = W = NUll;
	veh = NULL;
	direction = '0';
	x = y = -1;
}

//constructor to create place object
place::place(int xloc, int yloc, char dir)
{
	//N = S = E = W = NULL;
	veh = NULL;
	x = xloc;
	y = yloc;
	direction = dir;
}

