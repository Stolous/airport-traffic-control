#pragma once

#include <string>
using namespace std;

#include "ClockBox.h"

namespace AirportControl {

// Static class managing time
class Time {
public:
	static int time;
	static void StartTimer(ClockBox* box);
	static void Tick(void*);
	static string getTime();
	static ClockBox* box;
private:
	Time(ClockBox* box);
};

}