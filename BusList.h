#pragma once
#include "Bus.h"
class BusList
{
private:
	FwdList<Bus>bus_list;
	friend class AutoPark;
public:
	BusList() = default;
	void print()const;
};