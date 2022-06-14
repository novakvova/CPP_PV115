#define _CRT_SECURE_NO_WARNINGS

#include "Student.h"

Student::Student()
{
	mark = -1;
}

Student::Student(const char* name, double mark) : Person(name)
{
	//Person::Person(name);
	this->mark = mark;
}

Student & Student::operator=(const Student& student)
{
	// Guard self assignment
	if (this == &student)
		return *this;
	Person p = (Person)student;
	this->setAge(p.getAge());
	setName(p.getName());
	mark = student.mark;
	return *this;
}



void Student::ShowInfo() {
	cout << this->getName() << "\t" 
		<< this->getAge() << "\t"
		<< "mark: " << mark << "\n";
}
