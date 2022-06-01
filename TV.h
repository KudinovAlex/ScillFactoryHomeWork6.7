#pragma once
#include "Appliances.h"

class TV final : public Appliances
{
public:
	TV(string name, int weight, int screenSize);
	void ShowSpec() override;
private:
	string _name;
	int _screenSize;
};