#include <queue>
using namespace std;

#include "Event.h"
#include "BrowserPanel.h"

namespace AirportControl {

// Singleton
class EventManager {
private:
	EventManager();
	static EventManager* instance;

public:
	static EventManager* GetInstance() {
		if(!instance)
			instance = new EventManager();
		return instance;
	}

	//queue<Event> events;
	deque<Plane*> takeoff_planes;
	deque<Plane*> landing_planes;

	deque<Airline*> airlines;

	void AddTakeoffPlane(Plane* plane);
	void AddLandingPlane(Plane* plane);

	void (AirportControl::BrowserPanel::*takeoffbrowser_callback)(void);
	BrowserPanel* takeoff_box;
	BrowserPanel* landing_box;
};

}
