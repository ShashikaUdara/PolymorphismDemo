#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"
#include "Ship.h"
#include "Submarine.h"

using namespace std;

int main()
{
	Vehicle *vehicle = NULL;
	Car car("Toyota car", "can drive on the road.");
	Ship ship("Titanic ship", "sailes over the sea.");
	Plane plane("Boin 757 plane", "flies through the air.");
	Submarine submarine("Type VII submarine", "dives under the water.");

	vehicle = &car;
	vehicle->funcDescription();

	vehicle = &ship;
	vehicle->funcDescription();

	vehicle = &plane;
	vehicle->funcDescription();

	vehicle = &submarine;
	vehicle->funcDescription();

	return 0;
}