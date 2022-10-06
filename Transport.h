#pragma once
#include <iostream>
using namespace std;

class Transport {
protected:
	string name;
	double max_speed;
	double fuel;
	double cons; // средний расход топлива

public:
	void Consumption(int km) {
		cout << "Enter distance in km: ";
		cin >> km;

		cout << "Enter name: ";
		cin >> name;

		cout << "Enter fuel: ";
		cin >> fuel;

		cout << "Enter maximal speed of transport: ";
		cin >> max_speed;

		cons = fuel / km * 100;
	}

	virtual void Print() = 0;

};

