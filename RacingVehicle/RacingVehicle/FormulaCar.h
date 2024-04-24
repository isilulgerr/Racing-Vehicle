#pragma once
#include <iostream>
#ifndef FormulaCar_H
#define FormulaCar_H
#include <string.h>
#include "RacingVehicle.h"

using namespace std;

class FormulaCar : public RacingVehicle {
private:
	double aerodynamics;
public:
	FormulaCar(string vehicleType, double topSpeed, double handling, string manufacturer, string model, string driverName,double aerodynamics);
	void setaerodynamics(double aerodynamics) {
		this->aerodynamics = aerodynamics;
	}
	double getaerodynamics() { return aerodynamics; }
	double race(Track track);
};

#endif
