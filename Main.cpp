#include <iostream>
#include "IElectronics.h"
#include "StrangeDevice.h"
#include "TV.h"
#include "Device.h"
#include "CellPhone.h"

using namespace std;

int getInt() {
	while (true) {
		cout << "(введите число от 0 до 5): ";
		int value;
		cin >> value;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else {
			cin.ignore(32767, '\n');
			if (value >= 0 && value <= 5) return value;
		}
		cout << "Неверный ввод, попробуйте еще раз ";
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");

	const int storeSize = 5;
	IElectronics* shop[storeSize];
	shop[0] = new TV(string("Samsung TV"), 12, 37);
	shop[1] = new StrangeDevice(string("Yamaha MP3"), 1, 12, 100);
	shop[2] = new CellPhone(string("Motorolla phone"), 24, 4500);
	shop[3] = new Appliances(2);
	shop[4] = new Device(36);

	bool open = true;

	while (open) {
		cout << "Выберите товар: 1 - TV, 2 - StrangeDevice, 3 - CellPhone, 4 - Appliances, 5 - Device, 0 - Выход" << endl;
		int select = getInt();

		if (select == 0) {
			open = false;
		}
		else {
			shop[--select]->ShowSpec();
		}
	}

	for (int i = 0; i < storeSize; i++) {
		delete shop[i];
	}

	return 0;
}