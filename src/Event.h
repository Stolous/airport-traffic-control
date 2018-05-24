#include "Plane.h"
using namespace AirportControl;

namespace AirportControl {

enum EventType : char {
	NORMAL_LANDING = 'N',
	EMERGENCY_LANDING = 'E',
	BLACKLISTED_LANDING = 'B',
	TAKEOFF = 'T',
	CRASH = 'C',
	APPROACHING = 'A',
	DEPARTURE = 'D'
};

class Event {
public:
	Event(EventType type, Plane* plane);

	EventType type;
	Plane* plane;
};

}