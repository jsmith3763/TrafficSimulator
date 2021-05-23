#ifndef PLACE_H
#define PLACE_H
#define xlim 100
#define ylim 100

#include "vehicle.h"
#include <utility>

using namespace std;

class place
{
private:
	int x, y;
	place* N, * S, * E, * w;
	char direction;
	vehicle* veh;
public:
	place();
	place(int, int, char);
	bool isFreeForward(char) const;
	void setDirection(char);
	void setLocation(int, int);
	char getDirection() const;
	pair<int, int> getLocation() const;
	bool isFreeToMove() const;
	void setVehicle(vehicle*);
	vehicle* getVehicle() const;
	void setPlace(place*, char);
	place* getPlace(char) const;
};
#endif

