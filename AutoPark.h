#pragma once
#include "Header.h"
#include "BusList.h"
class AutoPark
{
public:
	AutoPark() = default;
	void buyBus(const Bus& obj);
	void sellBus(const size_t& index);
	void toRace(const Bus& obj);
	void toAutoPark(const Bus& obj);
	void print()const;
private:
	BusList inAutoPark;
	BusList inRace;
};