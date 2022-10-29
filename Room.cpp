#include "Room.h"

using namespace std;

void genericRoom::returnBookedRooms()
{
	cout << "There are " << bookedRooms << " booked rooms.\n";
}

void genericRoom::bookRoom()
{
	bookedRooms++;
}

void genericRoom::addRoomCount()
{
	bookedRooms++;
}

void genericRoom::addCourtyardCount()
{
	stdRmCY--;
}

void genericRoom::addScenicCount()
{
	stdRmSc--;
}

void genericRoom::addDeluxeCount()
{
	deluxeRm--;
}

void genericRoom::addPenthouseCount()
{
	pentHoRm--;
}

int genericRoom::showRoomCount()
{
	return bookedRooms;
}

int genericRoom::courtyardRoomsCount()
{
	return stdRmCY;
}

int genericRoom::scenicRoomsCount()
{
	return stdRmSc;
}

int genericRoom::deluxRoomsCount()
{
	return deluxeRm;
}

int genericRoom::penthouseRoomsCount()
{
	return pentHoRm;
}

double genericRoom::courtyardPrice()
{
	return stdRmCYPrice;
}

double genericRoom::scenicPrice()
{
	return stdRmScPrice;
}

double genericRoom::deluxePrice()
{
	return deluxeRmPrice;
}

double genericRoom::penthousePrice()
{
	return pentHoRmPrice;
}

double genericRoom::totalRevenue()
{
	totalRoomGross = ((courtyardRoomsCount() * stdRmCYPrice) + (scenicRoomsCount() * stdRmScPrice) + (deluxRoomsCount() * deluxeRmPrice) + (penthouseRoomsCount() * pentHoRmPrice));
	return totalRoomGross;
}

void courtyardRoom::bookRoom()
{
	cout << endl;
	cout << "     You've booked a Standard Courtyard Room!\n";
	addRoomCount();
	addCourtyardCount();
}

void scenicRoom::bookRoom()
{
	cout << endl;
	cout << "     You've booked a Standard Scenic Room!\n";
	addRoomCount();
	addScenicCount();
}

void deluxeRoom::bookRoom()
{
	cout << endl;
	cout << "     You've booked a Deluxe Suite!\n";
	addRoomCount();
	addDeluxeCount();
}

void penthouseRoom::bookRoom()
{
	cout << endl;
	cout << "     You've booked a Penthouse Suite!\n";
	addRoomCount();
	addPenthouseCount();
}
