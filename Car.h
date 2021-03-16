#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
public:
	Car(string n, string b) : Vehicle(n, b) {}
	~Car() {}
	void funcDescription();
};

#endif