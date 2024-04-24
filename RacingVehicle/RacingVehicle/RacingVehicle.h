#include <iostream>
#ifndef RacingVehincle_H
#define RacingVehincle_H
#include <string.h>
#include "Track.h"

using namespace std;

class RacingVehicle {
protected:
	string vehicleType;
	double topSpeed;
	double handling;
	string manufacturer;
	string model;
	string driverName;
public:
	void setvehicleType(string vehicleType) {
		this->vehicleType = vehicleType;
	}
	string getetvehicleType() { return vehicleType; }
	void settopSpeed(double topSpeed) {
		this->topSpeed = topSpeed;
	}
	double gettopSpeed() { return topSpeed; }
	void sethandling(double handling) {
		this->handling = handling;
	}
	double gethandling() { return handling; }
	void setmanufacturer(string manufacturer) {
		this->manufacturer = manufacturer;
	}
	string getmanufacturer() { return manufacturer; }
	void setmodel(string model) {
		this->model = model;
	}
	string getmodel() { return model; }
	void setdriverName(string driverName) {
		this->driverName = driverName;
	}
	string getdriverName() { return driverName; }
	RacingVehicle(string vehicleType, double topSpeed, double handling, string manufacturer, string model, string driverName);
	void display() {
		cout << "Vehicle Type: " << vehicleType << endl;
		cout << "Top Speed: " << topSpeed << endl;
		cout << "Handling: " << handling << endl;
		cout << "Manufacturer: " << manufacturer << endl;
		cout << "Model: " << model << endl;
		cout << "Driver Name: " << driverName << endl;
	}
	virtual double race(Track track);
    void Tuning(double increase_for_top_speed = 0.0, double increase_for_handling = 0.0);
};


#endif