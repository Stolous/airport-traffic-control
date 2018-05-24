#pragma once

#include <string>
using namespace std;

namespace AirportControl {

class Airline {
public:
	Airline(string name, string identifier, bool blacklisted);
	
	string name;
	string identifier;
	bool blacklisted;

	// TODO: list of all planes belonging to the airline
};

}