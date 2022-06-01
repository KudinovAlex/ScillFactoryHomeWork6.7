#include "CellPhone.h"

CellPhone::CellPhone(string name, int batteryLife, int batteryCapacity) : _name(name), Device(batteryLife), _batteryCapacity(batteryCapacity)
{
}

void CellPhone::ShowSpec()
{
	cout << "Name: " << _name << endl;
	cout << "Battery life: " << _batteryLife << endl;
	cout << "Battery capacity: " << _batteryCapacity << endl;
}
