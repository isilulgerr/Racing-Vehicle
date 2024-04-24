#pragma once
#include <iostream>
#ifndef Car_H
#define Car_H
#include <string.h>
#include "RacingVehicle.h"

using namespace std;

class Car : public RacingVehicle{
private:
	double aerodynamics;
public:
	virtual void setaerodynamics(double aerodynamics) {
		this->aerodynamics = aerodynamics;
	}
	Car(string vehicleType, double topSpeed, double handling, string manufacturer, string model, string driverName,double aerodynamics);
	double getaerodynamics() { return aerodynamics; }
	double race(Track track);
};

#endif