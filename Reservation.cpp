#include "Reservation.h"

using namespace std;

int reservations::returnBookedRooms()
{
	cout << "There are " << bookedRooms << " booked rooms.\n";
	return 0;
}

void reservations::reserveRoomMenu()
{
	cout << endl;
	cout << "";
}

void reservations::displayRoomOptions()
{
	cout << endl;
	cout << "The following rooms are open:\n";
	cout << "Standard rooms (Courtyard): " << stdRmCY << endl;
	cout << "      (current price: $" << stdRmCYPrice << ")\n";
	cout << "Standard rooms (Scenic): " << stdRmSc << endl;
	cout << "      (current price: $" << stdRmScPrice << ")\n";
	cout << "Deluxe Suites: " << deluxeRm << endl;
	cout << "      (current price: $" << deluxeRmPrice << ")\n";
	cout << "Penthouse Suites: " << pentHoRm << endl;
	cout << "      (current price: $" << pentHoRmPrice << ")\n";
	cout << endl;
}
