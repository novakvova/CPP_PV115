#include "Waiter.h"

Waiter::Waiter() :Person()
{
	tip = "400 грн.";
}

Waiter::Waiter(string name, string tip) :Person(name)
{
	this->tip = tip;
}

ofstream& Waiter::writeToFile(ofstream& out)
{
	Person::writeToFile(out);
	PersonType type(WAITER);
	out << (int)type << "\n";
	out << this->tip << "\n";
	return out;
}