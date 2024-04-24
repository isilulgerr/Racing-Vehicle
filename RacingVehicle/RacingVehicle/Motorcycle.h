#pragma once
#include <iostream>
#ifndef Motorcycle_H
#define Motorcycle_H
#include <string.h>
#include "RacingVehicle.h"

using namespace std;

class Motorcycle : public RacingVehicle {
private:
	double aerodynamics;
public:
	Motorcycle(string vehicleType, double topSpeed, double handling, string manufacturer, string model, string driverName,double aerodynamics);
	void setaerodynamics(double aerodynamics) {
		this->aerodynamics = aerodynamics;
	}
	double getaerodynamics() { return aerodynamics; }
	double race(Track track);
};

#endif
