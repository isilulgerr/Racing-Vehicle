#include <iostream>
#include <string.h>
#include "Track.h"

using namespace std;

Track::Track(int length, double topSpeedPct, double highHandlingPct, double mediumHandlingPct, double cruiseSpeedPct) {
	
	try {
		setlength(length);
		settopSpeedPct(topSpeedPct);
		sethighHandlingPct(highHandlingPct);
		setmediumHandlingPct(mediumHandlingPct);
		setcruiseSpeedPct(cruiseSpeedPct);

		double sum = topSpeedPct + highHandlingPct + mediumHandlingPct + cruiseSpeedPct;
		if (sum != 1.0) {
			throw 1;
		}
	}
	catch (int i) {
		cout << " error, sum of values is not equal to " << i << endl;
	}
}


