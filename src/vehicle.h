#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <utility>
#include "place.h"

using namespace std;
class vehicle
{

	// Variables
	private:
	place location;
	char direction;
	char status;
	string type;
	int size;

	
	public:
	//default constructor
	vehicle();
	//constructor
	vehicle(int x, int y, char dir);
	place getLocation() const;
	char getStatus() const;
	void move(place newLocation);



	
	
};

#endif

