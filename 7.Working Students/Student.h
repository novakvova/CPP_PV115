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
	int age;

public:
	Student() {
		this->name = "";
		this->phone = "";
		this->age = 18;
	}
	Student(const char* name, const char* phone, int age)
	{
		this->name = name;
		this->phone = phone;
		this->age = age;
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

	Student & operator=(const Student& student)
	{
		if (this == &student)
			return *this;
		if(!student.name.empty())
			this->name = student.name;
		//this->image = student.image;
		if(!student.phone.empty())
			this->phone = student.phone;
		this->age = student.age;
		return *this;
	}

	friend ostream& operator<<(ostream& out, const Student& student)
	{

		out << student.name << "\t" << student.phone << "\t" << student.age;

		return out;
	}

	friend istream& operator>>(istream& in, Student& student)
	{
		in.seekg(0);
		char tmp[100];
		cout << "Enter student Name\n";
		in.getline(tmp, 100, '\n');
		string str = tmp;
		if(!str.empty())
			student.name = tmp;
		cout << "Enter student Phone\n"; 
		in.getline(tmp, 100, '\n');
		str = tmp;
		if (!str.empty())
			student.phone = tmp;
		cout << "Enter student Age\n"; 
		in >> student.age;
		return in;
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