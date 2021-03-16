#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"
#include "Ship.h"
#include "Submarine.h"
#include "Rocket.h"

using namespace std;

int main()
{
	// Created the pointer object for the vehicle super class
	Vehicle *vehicle = NULL;

	// initialized other sub classes
	Car car("Toyota car", "can drive on the road.");
	Ship ship("Titanic ship", "sailes over the sea.");
	Plane plane("Boin 757 plane", "flies through the air.");
	Submarine submarine("Type VII submarine", "dives under the water.");
	Rocket rocket("Saturn V", "shoots through the space.");

	// polymorphism goes here
	vehicle = &car;
	vehicle->funcDescription();

	vehicle = &ship;
	vehicle->funcDescription();

	vehicle = &plane;
	vehicle->funcDescription();

	vehicle = &submarine;
	vehicle->funcDescription();

	vehicle = &rocket;
	vehicle->funcDescription();
	
	return 0;
}