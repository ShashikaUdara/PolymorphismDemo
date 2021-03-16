#ifndef PLANE_H
#define PLANE_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Plane : public Vehicle
{
public:
	Plane(string n, string b) : Vehicle(n, b) {}
	~Plane() {}
	void funcDescription();
};

#endif