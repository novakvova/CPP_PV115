#include "Student.h"

Student::Student()
{  //метод назва якого співпада із назвою каласа - констуктор(початкова ініціалізація об'єкта)
	name = "метод назва якого співпада із назвою каласа ----------------------------------------------------------------------- констуктор(початкова ініціалізація об'єкта)";
	setAge(18);
}

Student::Student(string name)
{
	setAge(18);
	setName(name);
}

Student::Student(const Student& student)
{
	name = student.name;
	m_age = student.m_age;
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
void Student::setName(string name)
{
	this->name = name;
}
int Student::getAge() { return m_age; }
string Student::getName() { return name; }

void Student::ShowInfo() {
	cout << name << "\t" << m_age << "\n";
}
