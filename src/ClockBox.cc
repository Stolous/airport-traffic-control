#include "ClockBox.h"
using namespace AirportControl;

ClockBox::ClockBox(Fl_Boxtype type, int x, int y, int width, int height, const char* title) : 
	Fl_Box(type, x, y, width, height, title),
	clock_label(new Fl_Label())
{
	this->labelsize(40);
	//this->label("Olala");

	/*clock_label->value = "00:00";
	clock_label->align_ = FL_ALIGN_CENTER;
	clock_label->size = 30;
	clock_label->type = FL_NORMAL_LABEL;*/
}

ClockBox::~ClockBox() {

}
/*
void ClockBox::draw(int x, int y, int w, int h, Fl_Align align) {
	

}*/

