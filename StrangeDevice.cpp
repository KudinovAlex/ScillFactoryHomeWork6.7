#include "StrangeDevice.h"

StrangeDevice::StrangeDevice(string name, int weight, int batteryLife, int numberOfTrack) : Appliances(weight), Device(batteryLife), _numberOfTrack(numberOfTrack), _name(name)
{
}

void StrangeDevice::ShowSpec()
{
	cout << "Name: " << _name << endl;
	cout << "Weight: " << _weight << " kg." << endl;
	cout << "Battery life: " << _batteryLife << endl;
	cout << "Number of track: " << _numberOfTrack << endl;
}