#include <string>
#include <iostream>

using namespace std;

int main()
{
	// Before spinning off other classes, get basic framework in place.
	// Various ints to store various amounts of rooms
	// Default values here are starting room amounts
	int stdRmCY = 70;
	int stdRmSc = 35;
	int deluxeRm = 15;
	int pentHoRm = 2;

	// List room prices
	// Using doubles in case maths later
	double stdRmCYPrice = 125.0;
	double stdRmScPrice = 145.0;
	double deluxeRmPrice = 350.0;
	double pentHoRmPrice = 1135.0;

	// User choice variable
	int userChoice;

	// Very basic UI to start
	// Read off starting inventory
	cout << endl;
	cout << "HOTEL GRIFFIN BOOKING SOFTWARE v0.1b" << endl;
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
	cout << endl;
	cout << "What would you like to do?\n";
	cout << "1. Reserve a room.\n";
	cout << "2. View current inventory and total daily revenue.\n";
	cout << "3. Exit the program.\n";
	cout << endl;
	cout << "Enter an option: ";
	cin >> userChoice;
	cout << endl;



	return 0;
}