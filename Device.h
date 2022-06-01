#pragma once
#include "IElectronics.h"

class Device : virtual public IElectronics
{
public:
	Device(int batteryLife);
	void ShowSpec() override;
protected:
	int _batteryLife;
};

