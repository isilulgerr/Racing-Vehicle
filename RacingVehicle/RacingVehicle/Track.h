#pragma once
#include <iostream>
#ifndef Track_H
#define Track_H
#include <string.h>

using namespace std;

class Track {
private:
	int length;
	double topSpeedPct;
	double highHandlingPct;
	double mediumHandlingPct;
	double cruiseSpeedPct;
public:
	Track(int length, double topSpeedPct, double highHandlingPct, double mediumHandlingPct, double cruiseSpeedPct);
	int getlength() { return length; }
	double gettopSpeedPct() {return topSpeedPct;}
	double gethighHandlingPct() { return highHandlingPct; }
	double getmediumHandlingPct() { return mediumHandlingPct; }
	double getcruiseSpeedPct() { return cruiseSpeedPct; }
	void setlength(int length) { this->length = length; }
	void settopSpeedPct(double topSpeedPct) { this->topSpeedPct = topSpeedPct; }
	void sethighHandlingPct(double highHandlingPct) { this->highHandlingPct = highHandlingPct; }
	void setmediumHandlingPct(double mediumHandlingPct) { this->mediumHandlingPct = mediumHandlingPct; }
	void setcruiseSpeedPct(double cruiseSpeedPct) { this->cruiseSpeedPct = cruiseSpeedPct; }

};

#endif