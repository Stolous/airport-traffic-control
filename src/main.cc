#include <iostream>
using namespace std;
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Tile.H>

#include "settings.h"
#include "ControlWindow.h"
#include "Time.h"
using namespace AirportControl;

void tick(void*) {
	std::cout << "Tick" << std::endl;
	Fl::repeat_timeout(1.0, tick);
}

int main(int argc, char** argv) {
	// Create the main window and place it at the center of the screen
	ControlWindow* window = new ControlWindow(Fl::w()/2 - WIDTH/2, Fl::h()/2 - HEIGHT/2, WIDTH, HEIGHT, "Airport Traffic Control");
	// Starting time management
	Time::StartTimer(window->clock_panel);
	
	window->show(argc, argv);
	
	return Fl::run();
}
