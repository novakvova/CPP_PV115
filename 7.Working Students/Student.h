#pragma once

#include<iostream>
#include<fstream>
#include <cstdio>
using namespace std;
class Student
{
private:
	string name;
	string phone;
	string image;
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
	Student(const char* name, const char* phone, const char* image, int age)
	{
		this->name = name;
		this->phone = phone;
		this->age = age;

		//copy image to directory images

	}
	Student(const Student& student)
	{
		this->name = student.name;
		this->age = student.age;
		this->phone = student.phone;
	}

	bool operator>(const Student& student)
	{
		if (this->name > student.name)
			return true;
		return false;
	}

	bool operator==(const Student& student)
	{
		if (this->name == student.name)
			return true;
		return false;
	}
	bool operator!=(const Student& student)
	{
		if (this->name != student.name)
			return true;
		return false;
	}

	friend ostream& operator<<(ostream& out, const Student& student)
	{

		out << student.name << "\t" << student.phone << "\t" << student.age;

		return out;
	}

	friend ofstream& operator<<(ofstream& out, const Student& student)
	{
		out << student.name << "\n" << student.phone << "\n" << student.age;
		return out;
	}
	friend ifstream& operator>>(ifstream& in, Student& student)
	{
		char tmp[100];
		in.getline(tmp, 100, '\n');
		student.name = tmp;
		in.getline(tmp, 100, '\n');
		student.phone = tmp;
		in >> student.age;
		in.getline(tmp, 100, '\n');
		return in;
	}

};