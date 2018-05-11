#include "Time.h"
using namespace AirportControl;

#include <iostream>
using namespace std;

#include <FL/Fl.H>

int Time::time = 0;
ClockBox* Time::box = nullptr;

void Time::StartTimer(ClockBox* box) {
	Time::box = box;
	Fl::add_timeout(0.0, Tick);
}

void Time::Tick(void*) {
	const char* timeText = getTime().c_str();
	std::cout << timeText << std::endl;
	box->copy_label(timeText);
	++Time::time;
	Fl::repeat_timeout(1.0, Tick);
}


string Time::getTime() {
	return std::to_string(Time::time/60) + string(":") + std::to_string(Time::time%60);
}