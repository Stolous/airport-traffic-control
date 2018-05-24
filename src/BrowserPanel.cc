#include "BrowserPanel.h"

#include <FL/Fl_Group.H>

#include "EventManager.h"

using namespace AirportControl;

BrowserPanel::BrowserPanel(int x, int y, int width, int height, const char* title) :
	Fl_Double_Window(x, y, width, height, title)
{
	this->begin();
	//box = new Fl_Box(FL_DOWN_BOX, 0, 0, width, height, "test");
	browser = new Fl_Browser(0, 0, width, height, "browser");
	this->end();
	resizable(browser);

	int widths[] = {50, 50, 50, 50, 50, 50, 50};
	//browser->column_widths(widths);
}

BrowserPanel::~BrowserPanel() {

}

void BrowserPanel::UpdateBrowser() {
	deque<Plane*> plane_queue = EventManager::GetInstance()->takeoff_planes;
	std::deque<Plane*>::iterator it = plane_queue.begin();
	while (it != plane_queue.end()) {
		printf("%s", (*it)->GetDescription().c_str());
		browser->add((*it)->GetDescription().c_str());
		++it;
	}
}


TakeoffPanel::TakeoffPanel(int x, int y, int width, int height, const char* title)
	: BrowserPanel(x, y, width, height, title)
{
	EventManager::GetInstance()->takeoff_box = this;
	UpdateBrowser();
}

void TakeoffPanel::UpdateBrowser() {
	browser->clear();
	deque<Plane*> plane_queue = EventManager::GetInstance()->takeoff_planes;
	std::deque<Plane*>::iterator it = plane_queue.begin();
	while (it != plane_queue.end()) {
		printf("Plane taking-off: %s", (*it)->GetDescription().c_str());
		browser->add((*it)->GetDescription().c_str());
		++it;
	}
}

LandingPanel::LandingPanel(int x, int y, int width, int height, const char* title)
	: BrowserPanel(x, y, width, height, title)
{
	EventManager::GetInstance()->landing_box = this;
	UpdateBrowser();
}

void LandingPanel::UpdateBrowser() {
	browser->clear();
	deque<Plane*> plane_queue = EventManager::GetInstance()->landing_planes;
	std::deque<Plane*>::iterator it = plane_queue.begin();
	while (it != plane_queue.end()) {
		printf("Landing plane: %s", (*it)->GetDescription().c_str());
		browser->add((*it)->GetDescription().c_str());
		++it;
	}
}
