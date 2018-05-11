#pragma once

#include <FL/Fl_Box.H>
#include <FL/Fl_Widget.H>

namespace AirportControl {

class ClockBox : public Fl_Box {
public:
	ClockBox(Fl_Boxtype type, int x, int y, int width, int height, const char* title);
	~ClockBox();

	//void draw(int, int, int, int, Fl_Align);
	Fl_Label* clock_label;
};

}
