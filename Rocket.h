#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Rocket : public Vehicle
{
public:
	Rocket(string n, string b) : Vehicle(n, b) {}
	~Rocket() {}
	void funcDescription();
};

#endif