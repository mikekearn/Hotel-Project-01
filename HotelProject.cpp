#include <string>
#include <iostream>

#include "Room.h"
#include "Reservation.h"

using namespace std;

int main()
{
	// Before spinning off other classes, get basic framework in place.
	// Room quantities and prices moved to Reservation.h header.

	// User choice variables
	int userChoice = 0;
	string userString = "0";

	// Very basic UI to start
	// Inventory moved to Reservation options
	// Add in while loop to keep program running.

	reservations oReservations;

	while (userChoice != 3)
	{
		cout << endl;
		cout << "      * HOTEL GRIFFIN BOOKING SOFTWARE *" << endl;
		cout << "	           (v0.0.2)" << endl;
		cout << endl;
		cout << endl;
		cout << "     What would you like to do?\n";
		cout << "       1. Reserve a room.\n";
		cout << "       2. View current inventory and total daily revenue.\n";
		cout << "       3. Exit the program.\n";
		cout << endl;
		cout << "     Enter an option: ";
		cin >> userString;
		if (userString.length() > 1)
		{
			userChoice = 0;
		}
		else
		{
			userChoice = stoi(userString);
		}

		if (userChoice == 1)
		{
			oReservations.reserveRoomMenu();
		}
		else if (userChoice == 2)
		{
			oReservations.displayRoomOptions();
		}
		else if (userChoice == 3)
		{
			cout << endl;
			cout << "          Thanks for using\n     Hotel Griffin Booking Software.\n          Have a nice day.";
			cout << endl;
		}
		else
		{
			cout << endl;
			cout << "That was not a valid input, please try again.";
			cout << endl;
		}

		cout << endl;
	}
	



	return 0;
}