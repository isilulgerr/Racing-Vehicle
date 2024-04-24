#include <iostream>
#include <string.h>
#include "RacingVehicle.h"

using namespace std;

RacingVehicle:: RacingVehicle(string vehicleType, double topSpeed, double handling, string manufacturer, string model, string driverName){
	setvehicleType(vehicleType);
	settopSpeed(topSpeed);
	sethandling(handling);
	setmanufacturer(manufacturer);
	setmodel(model);
	setdriverName(driverName);
}

double RacingVehicle::race(Track track) {
	double ourspeed;
	double lenghtofTopSpeed = track.getlength() * track.gettopSpeedPct();
	double lenghtofMedium = track.getlength() * track.getmediumHandlingPct();
	double lenghtofCruise = track.getlength() * track.getcruiseSpeedPct();
	double timeofTopSpeed = lenghtofTopSpeed / topSpeed;
	double lenghtofHigh = track.getlength() * track.gethighHandlingPct();
	if (handling < 0.8) {
		ourspeed = topSpeed * 0.1;
	}
	else ourspeed = topSpeed;
	double timeofHigh = lenghtofHigh / ourspeed;

	if (handling < 0.6) {
		ourspeed = topSpeed * 0.9;
	}
	double timeofMedium = lenghtofMedium / ourspeed;

	ourspeed = topSpeed * 0.5;
	double timeofCruise = lenghtofCruise / ourspeed;
	double final = timeofTopSpeed + timeofHigh + timeofCruise + timeofMedium;
	return final;
}
	void RacingVehicle::Tuning(double increase_for_top_speed, double increase_for_handling) {
	topSpeed = topSpeed * increase_for_top_speed / 100 + topSpeed ;
	handling = handling * increase_for_handling / 100 + handling;
}