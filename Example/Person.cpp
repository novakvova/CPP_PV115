#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"

Person::Person()
{  //����� ����� ����� ������� �� ������ ������ - ����������(��������� ����������� ��'����)
	int size = strlen("no name");
	name = new char[size + 1];
	strcpy(name, "no name");
	name[size] = '\0';
	setAge(18);
}

Person::Person(const char* name)
{
	setAge(18);
	setName(name);
}

Person::Person(const Person& student)
{
	int size = strlen(student.name);
	this->name = new char[size + 1];
	strcpy(this->name, student.name);
	m_age = student.m_age;
	//delete[] marks;

}

Person::~Person() {
	cout << "Student delete: " << name << "\n";
	delete[] name;
}

//��� ���� �������� age.
void Person::setAge(int age) { //����� - �� ������� � ������� �����.
	if (age < 0)
	{
		cout << "------����� ������� - �� �� �������!------\n";
		return;
	}
	m_age = age;
}
void Person::setName(const char* name)
{
	delete[] this->name;
	int size = strlen(name);
	this->name = new char[size + 1];
	strcpy(this->name, name);
}

void Person::setName(const string name)
{
	delete[] this->name;
	int size = name.length();
	this->name = new char[size + 1];
	strcpy(this->name, name.c_str());
}
int Person::getAge() { return m_age; }
string Person::getName() { return name; }