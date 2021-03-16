#ifndef SUBMARINE_H
#define SUBMARINE_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Submarine : public Vehicle
{
public:
	Submarine(string n, string b) : Vehicle(n, b) {}
	~Submarine() {}
	void funcDescription();
};

#endif