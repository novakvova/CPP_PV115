#define _CRT_SECURE_NO_WARNINGS

#include "Student.h"

Student::Student()
{
	mark = -1;
}

Student::Student(const char* name, double mark) : Person(name)
{
	this->mark = mark;
}

Student & Student::operator=(const Student& student)
{
	// Guard self assignment
	if (this == &student)
		return *this;
	this->setAge(Person::getAge());
	setName(Person::getName());
	mark = student.mark;
	return *this;
}



void Student::ShowInfo() {
	Person::ShowInfo();
	cout<<"Îö³íêà: " << mark << "\n";
}
