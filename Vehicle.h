#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle
{
public:
	Vehicle(string n, string b) : name(n), behavior(b) {}
	~Vehicle() {}
	virtual void funcDescription() = 0;

protected:
	string name, behavior;
};

#endif