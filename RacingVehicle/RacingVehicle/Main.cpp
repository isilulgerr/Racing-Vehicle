#include <iostream>
#include "FormulaCar.h"
#include "Motorcycle.h"
#include "Car.h"
#include "Track.h"
#include "RacingVehicle.h"

using namespace std;

int main()
{
	Track track(50, 0.2, 0.4, 0.3, 0.1);
	Car car("Car", 200, 0.7, "Ferrari", "Monza SP2", "Charles Leclerc", 20);
	cout << "---1---" << endl;
	car.display();
	Motorcycle motorcycle("Motorcycle", 180, 0.9, "Yamaha", "YZF-R1", "Carlos Sainz Jr.",30);
	cout << "---2---" << endl;
	motorcycle.display();
	FormulaCar formulacar("FormulaCar", 300, 0.95, "Redbull", "RB13", "Max Verstappen",50);
	cout << "---3---" << endl;
	formulacar.display();

	cout << "Race Track: Australian Outback" << endl;
	cout << "Total Length: " << track.getlength() << endl;
	cout << "Top Speed Distance: " << track.getlength() * track.gettopSpeedPct() << "km" << endl;
	cout << "High Speed Distance: " << track.getlength() * track.gethighHandlingPct() << "km" << endl;
	cout << "Medium Speed Distance: " << track.getlength() * track.getmediumHandlingPct() << "km" << endl;
	cout << "Cruise Speed Distance: " << track.getlength() * track.getcruiseSpeedPct() << "km" << endl;
	cout << "\n" << endl;
	cout << "Race starts..." << endl;
	cout << "Car race time: " << car.race(track) << "hours" << endl;
	cout << "Motorcycle race time: " << motorcycle.race(track) << "hours" << endl;
	cout << "FormulaCar race time: " << formulacar.race(track) << "hours" << endl;
	cout << "\n";

	cout << "After Tuning..." << endl;
	cout << "---1---" << endl;
	car.Tuning(10, 10);
	car.display();
	cout << "---2---" << endl;
	motorcycle.Tuning(10, 10);
	motorcycle.display();
	cout << "---3---" << endl;
	formulacar.Tuning(10, 10);
	formulacar.display();
	cout << "\n";
	cout << "Race Times After Tuning..." << endl;
	cout << "Car race time: " << car.race(track) << "hours" << endl;
	cout << "Motorcycle race time: " << motorcycle.race(track) << "hours" << endl;
	cout << "FormulaCar race time: " << formulacar.race(track) << "hours" << endl;
	cout << "\n";
	cout << "ISIL ULGER / 21070001036 " << endl;

	return 0;
}
