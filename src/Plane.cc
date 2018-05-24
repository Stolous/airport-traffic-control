#include "Plane.h"
#include "Airline.h"
using namespace AirportControl;

Plane::Plane(Airline* airline, string flight_number, int fuel_remaining, int fuel_consumption, int takeoff_time, int landing_time, bool emergency) :
	airline(airline),
	flight_number(flight_number),
	fuel_remaining(fuel_remaining),
	takeoff_time(takeoff_time),
	landing_time(landing_time),
	emergency(emergency)
{
}

Plane::~Plane() {

}

int Plane::GetAutonomy() {
	return fuel_remaining / fuel_consumption;
}

string Plane::GetDescription(bool landing) {
	return 	(string)"Flight " + this->flight_number + 
			(string)" of " + airline->name + 
			(string)" expected to " + (landing ? "land" : "take-off") + " at " + std::to_string(takeoff_time);
}
