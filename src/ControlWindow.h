#pragma once

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Tile.H>

#include "ClockBox.h"
#include "BrowserPanel.h"
namespace AirportControl {

class ControlWindow : public Fl_Window {
public:
	ControlWindow(int x, int y, int width, int height, const char* title);
	~ControlWindow();
	
	// Needed for resizable tiling
	Fl_Tile* tile;
	Fl_Box* resizeable;

	// Two left panels
	LandingPanel* landing_panel;
	TakeoffPanel* takeoff_panel;

	// panels on the right
	ClockBox* clock_panel;
	BrowserPanel* upcoming_events_panel;
	BrowserPanel* previous_events_panel;
	Fl_Box* actions_panel;
};

}
