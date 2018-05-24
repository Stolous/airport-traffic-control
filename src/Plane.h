#pragma once

#include <string>
using namespace std;

#include "Airline.h"

namespace AirportControl {

class Plane {
public:
	Plane(Airline* airline, string flight_number, int fuel_remaining, int fuel_consumption, int takeoff_time, int landing_time, bool emergency);
	~Plane();

	Airline* airline;
	string flight_number;

	int takeoff_time;
	int landing_time;

	bool emergency;

	int GetAutonomy();
	
	string GetDescription();

private:
	int fuel_remaining;
	int fuel_consumption;
};

}
