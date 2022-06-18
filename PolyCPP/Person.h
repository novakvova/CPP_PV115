#pragma once
#include <string>
#include <fstream>
using namespace std;

enum PersonType
{
	COOK=0,   //�����
	WAITER=1  //��������
};

class Person
{
private:
	string name;

public:
	Person();
	Person(const string);
	Person(const Person&);
	void setName(const string);
	string getName();

	virtual ofstream & writeToFile(ofstream&);

};

