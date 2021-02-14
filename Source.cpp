#include "AutoPark.h"
#include "FwdList.h"
#include "Header.h"
#pragma once
using namespace std;
int main() {
	AutoPark autopark;
	cout << "Bus 1" << endl;
	autopark.buyBus(Bus(1, "Kolesnikov Valeriy Andriyovich", 1));
	autopark.buyBus(Bus(2, "Panasyuk Oleg Volodimirovich", 2));
	autopark.buyBus(Bus(3, "Mahnovska Olena Yuryivna", 3));
	autopark.buyBus(Bus(4, "Martinuk Oleksandr Oleksandrovich", 4));
	autopark.print();
	autopark.sellBus(1);
	autopark.toRace(Bus(3, "Mahnovska Olena Yuryivna", 3));
	autopark.print();
	return 0;
}