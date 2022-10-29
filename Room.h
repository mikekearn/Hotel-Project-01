#ifndef Room_h
#define Room_h

#include <string>
#include <iostream>

using namespace std;

class genericRoom
{
private:
	int roomNumber;
	double roomPrice;

public:
	void bookRoom();
};

class courtyardRoom: public genericRoom
{
public:
	void bookRoom();
};



#endif // !Room_h

