#include <iostream>
using namespace std;

#include <FL/Fl.H>

#include "settings.h"
#include "ControlWindow.h"
#include "Time.h"
using namespace AirportControl;

int main(int argc, char** argv) {
	// Create the main window and place it at the center of the screen
	ControlWindow* window = new ControlWindow(Fl::w()/2 - WIDTH/2, Fl::h()/2 - HEIGHT/2, WIDTH, HEIGHT, "Airport Traffic Control");
	window->show(argc, argv);
	// Starting time management
	Time::StartTimer(window->clock_panel);
	
	return Fl::run();
}
