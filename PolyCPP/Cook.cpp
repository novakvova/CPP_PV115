#include "Cook.h"

Cook::Cook() :Person()
{
	level = "3 розряд";
}

Cook::Cook(string name, string level) :Person(name)
{
	this->level = level;
}

ofstream& Cook::writeToFile(ofstream& out)
{
	Person::writeToFile(out);
	PersonType type(COOK);
	out << (int)type << "\n";
	out << this->level << "\n";
	return out;
}
