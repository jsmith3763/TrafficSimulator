#include "vehicle.h"

//default constructor
vehicle::vehicle()
{
	// stub out
}

//constructor
vehicle::vehicle(int x, int y, char dir)
{
    location = place(x,y);
    direction = dir;
    status = '0';
    size = -1;
}

//returns vehicle's location
place vehicle::getLocation() const
{
    return location;
}

//returns vehicle's status
char vehicle::getStatus() const
{
    return status;
}

//moves vehicle
void vehicle::move(place newLocation)
{
    // does direction change
    if(direction = 'W' || 'E')
    {
        if (location.getY() > newLocation.getY())
        {
            direction = 'N';
        } 
        else if (location.getY() < newLocation.getY())
        {
            direction = 'S';
        } else if ( direction = 'W' && location.getX() > newLocation.getX())
        {
            direction = 'E';
        }  
        else if ( direction = 'E' && location.getX() < newLocation.getX())
        {
            direction = 'W';
        }             
    } 
    else 
    {
        if (location.getX() > newLocation.getX())
        {
            direction = 'E';
        } 
        else if (location.getX() < newLocation.getX())
        {
            direction = 'W';
        } else if ( direction = 'N' && location.getY() > newLocation.getY())
        {
            direction = 'S';
        }  
        else if ( direction = 'N' && location.getY() < newLocation.getY())
        {
            direction = 'N';
        }  
    }
    

    // Change to new location
    location = newLocation;
}