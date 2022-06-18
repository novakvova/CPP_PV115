#pragma once
#include "Person.h";

class Cook : public Person
{
private:
	string level;
public:
	Cook();
	Cook(string, string);
	ofstream& writeToFile(ofstream&);
};

