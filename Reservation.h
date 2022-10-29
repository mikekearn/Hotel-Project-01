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
	// Declare some variables to use
	int bookedRooms = 0;
	const int totalRooms = 122;
	
	// *** May not continue this methodology. ***
	// Transfering each room variable from main to here
	int stdRmCY = 70;
	int stdRmSc = 35;
	int deluxeRm = 15;
	int pentHoRm = 2;

	const double stdRmCYPrice = 125.0;
	const double stdRmScPrice = 145.0;
	const double deluxeRmPrice = 350.0;
	const double pentHoRmPrice = 1135.0;

public:
	int returnBookedRooms();
	void reserveRoomMenu();
	void displayRoomOptions();
};

#endif // !Reservation_h

