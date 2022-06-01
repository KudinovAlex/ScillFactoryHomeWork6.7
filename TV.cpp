#include "TV.h"

TV::TV(string name, int weight, int screenSize) : _name(name), Appliances(weight), _screenSize(screenSize)
{
}

void TV::ShowSpec()
{
	cout << "Name: " << _name << endl;
	cout << "Weight: " << _weight << " kg" << endl;
	cout << "Size of screen: " << _screenSize << " inch" << endl;
}