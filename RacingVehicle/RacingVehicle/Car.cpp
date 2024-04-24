#include <iostream>
#include <string.h>
#include "Car.h"

using namespace std;

Car::Car(string vehicleType, double topSpeed, double handling, string manufacturer, string model, string driverName,double aerodynamics):RacingVehicle(vehicleType, topSpeed,handling, manufacturer, model,driverName) {
	setvehicleType(vehicleType);
	settopSpeed(topSpeed);
	sethandling(handling);
	setmanufacturer(manufacturer);
	setmodel(model);
	setdriverName(driverName);
	setaerodynamics(aerodynamics);
}

double Car::race(Track track) {
	double ourspeed;
	double aerotop = track.gettopSpeedPct() + (aerodynamics * 0.1);
	double lenghtofTopSpeed = track.getlength() * track.gettopSpeedPct();
	double lenghtofMedium = track.getlength() * track.getmediumHandlingPct();
	double lenghtofCruise = track.getlength() * track.getcruiseSpeedPct();
	double timeofTopSpeed = lenghtofTopSpeed / aerotop;
	double lenghtofHigh = track.getlength() * track.gethighHandlingPct();
	if (handling < 0.8) {
		ourspeed = aerotop * 0.8;
	}
	else ourspeed = aerotop;
	double timeofHigh = lenghtofHigh / ourspeed;

	if (handling < 0.6) {
		ourspeed = aerotop * 0.9;
	}
	double timeofMedium = lenghtofMedium / ourspeed;

	ourspeed = topSpeed * 0.5;
	double timeofCruise = lenghtofCruise / ourspeed;
	double final = timeofTopSpeed + timeofHigh + timeofCruise + timeofMedium;
	return final;
}