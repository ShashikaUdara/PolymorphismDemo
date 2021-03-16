#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Ship : public Vehicle
{
public:
	Ship(string n, string b) : Vehicle(n, b) {}
	~Ship() {}
	void funcDescription();
};

#endif