#pragma once
#include "Person.h";

class Waiter : public Person
{
private:
	string tip;
public:
	Waiter();
	Waiter(string, string);
	ofstream& writeToFile(ofstream&);
};

