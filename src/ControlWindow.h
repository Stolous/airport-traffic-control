#pragma once

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Tile.H>

#include "ClockBox.h"
namespace AirportControl {

class ControlWindow : public Fl_Window {
public:
	ControlWindow(int x, int y, int width, int height, const char* title);
	~ControlWindow();
	
	// Needed for resizable tiling
	Fl_Tile* tile;
	Fl_Box* resizeable;

	// Two left panels
	Fl_Box* landing_panel;
	Fl_Box* boarding_panel;

	// panels on the right
	ClockBox* clock_panel;
	Fl_Box* upcoming_events_panel;
	Fl_Box* previous_events_panel;
	Fl_Box* actions_panel;
};

}
