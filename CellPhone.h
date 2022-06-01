#pragma once
#include "Device.h"

class CellPhone final : public Device
{
public:
	CellPhone(string name, int batteryLife, int batteryCapacity);
	void ShowSpec() override;
private:
	string _name;
	int _batteryCapacity;
};

