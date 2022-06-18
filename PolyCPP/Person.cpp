#include "Person.h"

Person::Person() {
	this->name = "no name";
}

Person::Person(const string name)
{
	this->name = name;
}

Person::Person(const Person& person)
{
	this->name = person.name;
}

void Person::setName(const string name)
{
	this->name = name;
}
string Person::getName()
{
	return this->name;
}

ofstream& Person::writeToFile(ofstream& out)
{
	//PersonType p((PersonType)1);
	//out << (int)p << "\n";
	out << this->name << "\n";
	return out;
}