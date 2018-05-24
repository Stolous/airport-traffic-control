#include "ControlWindow.h"

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Tile.H>

#include "settings.h"

#include "ClockBox.h"

using namespace AirportControl;

ControlWindow::ControlWindow(int x, int y, int width, int height, const char* title) : 
	Fl_Window(x, y, width, height, title),
	tile(new Fl_Tile(10, 10, WIDTH-10, HEIGHT-10)),
	resizeable(new Fl_Box(tile->x(), tile->y(), tile->w(), tile->h(), "resizable")),
	landing_panel(new LandingPanel(0, 0, 800, 300, "Landing")),
	takeoff_panel(new TakeoffPanel(0, 300, 800, HEIGHT-300, "Boarding")),
	clock_panel(new ClockBox(FL_DOWN_BOX, 800, 0, WIDTH-800, 80, "Clock")),
	upcoming_events_panel(new BrowserPanel(800, 80, WIDTH-800, 300, "Upcoming events")),
	previous_events_panel(new BrowserPanel(800, 80+300, WIDTH-800, 100, "Previous events")),
	actions_panel(new Fl_Box(FL_DOWN_BOX, 800, 80+300+100, WIDTH-800, HEIGHT-80-300-100, "Actions"))
{

}

ControlWindow::~ControlWindow(){

}