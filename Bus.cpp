#include "Bus.h"
#include "Header.h"
using namespace std;
const size_t Bus::getNumber() const
{
	return number;
}

Bus::Bus(const size_t& number, const string& PIB, const int& number_of_route)
	:number(number), PIB(PIB), number_of_route(number_of_route)
{
}

void Bus::print() const
{
	cout << "Bus: " << endl;
	cout << "Number: " << number << endl;
	cout << "PIB: " << PIB << endl;
	cout << "Number of route: " << number_of_route << endl;
	cout << "-----------------" << endl;

}

const bool Bus::operator==(const Bus& obj)
{
	if (number == obj.number && number_of_route == obj.number_of_route && PIB == obj.PIB)
	{
		return true;
	}
	return false;
}
const bool Bus::operator!=(const Bus& obj)
{
	return !(*this == obj);
}
ostream& operator<<(ostream& out, const Bus& obj)
{
	obj.print();
	return out;
}