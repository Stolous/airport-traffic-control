#include "EventManager.h"
using namespace AirportControl;

#include <queue>
using namespace std;

#include "Airline.h"

EventManager* EventManager::instance = nullptr;

EventManager::EventManager() {
	this->takeoff_planes.push_front(new Plane(new Airline("Air France", "AF", false), "AF1234", 20, 1, 3, 5, false));
	this->takeoff_planes.push_front(new Plane(new Airline("Delta Airlines", "DL", false), "DL7570", 40, 5, 3, 5, false));
	this->takeoff_planes.push_front(new Plane(new Airline("Rayanair", "FR", false), "FR6744", 10, 2, 3, 5, false));
	this->takeoff_planes.push_front(new Plane(new Airline("Lufthansa", "LH", false), "LH2387", 20, 2, 3, 5, false));
	
	this->landing_planes.push_front(new Plane(new Airline("Turkish Airlines", "TK", false), "TK1536", 60, 3, 3, 5, false));
	this->landing_planes.push_front(new Plane(new Airline("Air France", "AF", false), "AF9876", 100, 11, 3, 5, false));
	this->landing_planes.push_front(new Plane(new Airline("Easyjet", "U2", false), "U23249", 20, 8, 3, 5, true));
	this->landing_planes.push_front(new Plane(new Airline("Emirates", "EK", false), "EK5875", 120, 20, 3, 5, false));
}


void EventManager::AddTakeoffPlane(Plane* plane) {
	this->takeoff_planes.push_front(plane);
	this->takeoff_box->UpdateBrowser();
}

void EventManager::AddLandingPlane(Plane* plane) {
	this->landing_planes.push_front(plane);
	this->landing_box->UpdateBrowser();
}
