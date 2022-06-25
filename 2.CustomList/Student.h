#pragma once
#include<iostream>
using namespace std;
class Student
{
private:
	string name;
	string phone;
	int age;

public:
	Student() {
		this->name = "no name";
		this->phone = "+38";
		this->age = 18;
	}
	Student(const char* name, const char* phone, int age)
	{
		this->name = name;
		this->phone = phone;
		this->age = age;
	}

	friend ostream& operator<<(ostream& out, const Student& student)
	{

		out << student.name<<"\t"<<student.phone<<"\t"<<student.age;

		return out;
	}

};

