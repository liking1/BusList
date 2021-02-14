#pragma once
#include "Header.h"
class Bus
{
private:
	size_t number;
	string PIB;
	int number_of_route;
public:
	void setNumber(const size_t& number) {
		if (number != 0)
		{
			this->number = number;
		}
	}
	void setPIB(const string& PIB) {
		if (PIB.empty())
		{
			this->PIB = PIB;
		}
	}
	void setNumberOfRoute(const int& number_of_route) {
		if (number_of_route != 0)
		{
			this->number_of_route = number_of_route;
		}
	}
	const size_t getNumber()const;
	Bus(const size_t& number = 0, const string& PIB = "NoName", const int& number_of_route = 0);
	void print()const;
	const bool operator==(const Bus& obj);
	const bool operator!=(const Bus& obj);
	friend ostream& operator<< (ostream& out, const Bus& obj);
};