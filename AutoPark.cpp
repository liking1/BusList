#include "AutoPark.h"

void AutoPark::buyBus(const Bus& obj)
{
	inAutoPark.bus_list.addTail(obj);
}

void AutoPark::sellBus(const size_t& index)
{
	if (!inAutoPark.bus_list.isEmpty() && inAutoPark.bus_list.isCorrectIndex(index))
	{
		inAutoPark.bus_list.deleteElemWithIndex(index);
	}
	else {

		cout << boolalpha << inAutoPark.bus_list.isCorrectIndex(index) << "II" << endl;
	}
}

void AutoPark::toRace(const Bus& obj)
{
	inRace.bus_list.pushFront(obj);
	inAutoPark.bus_list.deleteElemWithNumber(obj.getNumber());
}

void AutoPark::toAutoPark(const Bus& obj)
{
	inAutoPark.bus_list.pushFront(obj);
	inRace.bus_list.deleteElemWithNumber(obj.getNumber());
}

void AutoPark::print() const
{
	//cout << "AutoPark: " << endl;
	inAutoPark.print();
	cout << "In Race: " << endl;
	inRace.print();
}