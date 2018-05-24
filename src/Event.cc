#include "Event.h"
using namespace AirportControl;

Event::Event(EventType type, Plane* plane) :
	type(type),
	plane(plane)
{
}