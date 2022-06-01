#pragma once
#include "Appliances.h"
#include "Device.h"

class StrangeDevice final : public Appliances, Device
{
public:
	StrangeDevice(string name, int weight, int batteryLife, int numberOfTrack);
	void ShowSpec() override;
protected:
	string _name;
	int _numberOfTrack;
};