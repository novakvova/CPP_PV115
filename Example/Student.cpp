#define _CRT_SECURE_NO_WARNINGS

#include "Student.h"

Student::Student()
{  //метод назва якого співпада із назвою каласа - констуктор(початкова ініціалізація об'єкта)
	int size = strlen("метод назва якого співпада із назвою каласа - констуктор(початкова ініціалізація об'єкта)");
	name = new char[size+1];
	strcpy(name, "метод назва якого співпада із назвою каласа - констуктор(початкова ініціалізація об'єкта)");
	name[size] = '\0';
	setAge(18);
}

Student::Student(const char *name)
{
	setAge(18);
	setName(name);
}

Student::Student(const Student& student)
{
	int size = strlen(student.name);
	this->name = new char[size + 1];
	strcpy(this->name, student.name);
	m_age = student.m_age;
	//delete[] marks;
	
}

Student::~Student() {
	cout << "Student delete: " << name << "\n";
	delete[] name;
}

Student & Student::operator=(const Student& student)
{
	// Guard self assignment
	if (this == &student)
		return *this;
	m_age = student.m_age;

	setName(student.name);
	return *this;
}

//Для зміни значення age.
void Student::setAge(int age) { //метод - це функція в середині класу.
	if (age < 0)
	{
		cout << "------Даний студент - ще не родився!------\n";
		return;
	}
	m_age = age;
}
void Student::setName(const char* name)
{
	delete[] this->name;
	int size = strlen(name);
	this->name = new char[size+1];
	strcpy(this->name, name);
}
int Student::getAge() { return m_age; }
string Student::getName() { return name; }

void Student::ShowInfo() {
	cout << name << "\t" << m_age << "\n";
}
