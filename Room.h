#ifndef Room_h
#define Room_h

#include <string>
#include <iostream>

using namespace std;

// Testing out some options with base classes, inheritence, and derived classes
class genericRoom
{
private:
	// Declare some variables to use
	int bookedRooms = 0;

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

	double totalRoomGross;

public:

	const int totalRooms = 122;

	void returnBookedRooms();
	void bookRoom();
	void addRoomCount();

	void addCourtyardCount();
	void addScenicCount();
	void addDeluxeCount();
	void addPenthouseCount();

	int showRoomCount();
	
	int courtyardRoomsCount();
	int scenicRoomsCount();
	int deluxRoomsCount();
	int penthouseRoomsCount();
	
	double courtyardPrice();
	double scenicPrice();
	double deluxePrice();
	double penthousePrice();

	double totalRevenue();
};

class courtyardRoom: public genericRoom
{
public:
	void bookRoom();
};

class scenicRoom : public genericRoom
{
public:
	void bookRoom();
};

class deluxeRoom : public genericRoom
{
public:
	void bookRoom();
};

class penthouseRoom : public genericRoom
{
public:
	void bookRoom();
};


#endif // !Room_h

