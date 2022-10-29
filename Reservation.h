#ifndef Reservation_h
#define Reservation_h

#include "Room.h"
#include <string>
#include <iostream>

using namespace std;

// Current idea is using this class for all functions regarding reservations, accumulations,
// daily totals, etc.
class reservations
{
private:
	courtyardRoom makeCourtyards;
	scenicRoom makeScenics;
	deluxeRoom makeDeluxes;
	penthouseRoom makePenthouses;
	genericRoom ogRoom;
public:
	void reserveRoomMenu();
	void displayRoomOptions();
	void displayRoomSummary();
};

#endif // !Reservation_h

