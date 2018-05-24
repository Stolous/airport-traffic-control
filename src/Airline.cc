#include "Airline.h"
using namespace AirportControl;

#include <string>
using namespace std;


Airline::Airline(string name, string identifier, bool blacklisted) :
	name(name),
	identifier(identifier),
	blacklisted(blacklisted)
{
}

