#include "Reservation.h"

using namespace std;

void reservations::reserveRoomMenu()
{
	// Make some variables to use
	bool loopReservations = true;
	string userInput;
	string bookAgain;
	
	/**
	courtyardRoom makeCourtyards;
	scenicRoom makeScenics;
	deluxeRoom makeDeluxes;
	penthouseRoom makePenthouses;
	**/

	while (loopReservations)
	{
		cout << endl;
		displayRoomOptions();
		cout << "     5. Return to previous menu.\n";
		cout << endl;
		cout << "     Please choose an option: ";
		cin >> userInput;
		if (userInput.length() > 1)
		{
			cout << endl;
			cout << "     Invalid selection, please try again.\n";
		}
		else
		{
			switch (stoi(userInput))
			{
			case 1:
				makeCourtyards.bookRoom();
				cout << endl;
				cout << "     Would you like to book another room? (y/n) ";
				cin >> bookAgain;
				if (bookAgain == "y" || bookAgain == "Y")
				{
					loopReservations = true;
					break;
				}
				else if (bookAgain == "n" || bookAgain == "N")
				{
					loopReservations = false;
					break;
				}
				else
				{
					cout << endl;
					cout << "     Invalid selection, please try again.\n";
					loopReservations = true;
					break;
				}
				break;
			case 2:
				makeScenics.bookRoom();
				cout << endl;
				cout << "     Would you like to book another room? (y/n) ";
				cin >> bookAgain;
				if (bookAgain == "y" || bookAgain == "Y")
				{
					loopReservations = true;
					break;
				}
				else if (bookAgain == "n" || bookAgain == "N")
				{
					loopReservations = false;
					break;
				}
				else
				{
					cout << endl;
					cout << "     Invalid selection, please try again.\n";
					loopReservations = true;
					break;
				}
				break;
			case 3:
				makeDeluxes.bookRoom();
				cout << endl;
				cout << "     Would you like to book another room? (y/n) ";
				cin >> bookAgain;
				if (bookAgain == "y" || bookAgain == "Y")
				{
					loopReservations = true;
					break;
				}
				else if (bookAgain == "n" || bookAgain == "N")
				{
					loopReservations = false;
					break;
				}
				else
				{
					cout << endl;
					cout << "     Invalid selection, please try again.\n";
					loopReservations = true;
					break;
				}
				break;
			case 4:
				makePenthouses.bookRoom();
				cout << endl;
				cout << "     Would you like to book another room? (y/n) ";
				cin >> bookAgain;
				if (bookAgain == "y" || bookAgain == "Y")
				{
					loopReservations = true;
					break;
				}
				else if (bookAgain == "n" || bookAgain == "N")
				{
					loopReservations = false;
					break;
				}
				else
				{
					cout << endl;
					cout << "     Invalid selection, please try again.\n";
					loopReservations = true;
					break;
				}
				break;
			case 5:
				loopReservations = false;
				break;
			default:
				cout << endl;
				cout << "     Invalid selection, please try again.\n";
				break;
			}
		}
	}
}

void reservations::displayRoomOptions()
{
	cout << endl;
	cout << "     The following rooms are open:\n";
	cout << "     1. Standard rooms (Courtyard): " << ogRoom.courtyardRoomsCount() << "\t(current price: $" << ogRoom.courtyardPrice() << ")\n";
	cout << "     2. Standard rooms (Scenic): " << ogRoom.scenicRoomsCount() << "   \t(current price: $" << ogRoom.scenicPrice() << ")\n";
	cout << "     3. Deluxe Suites: " << ogRoom.deluxRoomsCount() << "             \t(current price: $" << ogRoom.deluxePrice() << ")\n";
	cout << "     4. Penthouse Suites: " << ogRoom.penthouseRoomsCount() << "          \t(current price: $" << ogRoom.penthousePrice() << ")\n";
}

void reservations::displayRoomSummary()
{
	cout << endl;
	cout << "     There are " << ogRoom.totalRooms - ogRoom.showRoomCount() << " rooms left.\n";
	cout << "     The total revenue for the day so far is " << ogRoom.totalRevenue() << endl;
	cout << endl;
}
