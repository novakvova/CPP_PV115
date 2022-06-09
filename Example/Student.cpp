#include "Student.h"

Student::Student()
{  //����� ����� ����� ������� �� ������ ������ - ����������(��������� ����������� ��'����)
	name = "����� ����� ����� ������� �� ������ ������ ----------------------------------------------------------------------- ����������(��������� ����������� ��'����)";
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
//��� ���� �������� age.
void Student::setAge(int age) { //����� - �� ������� � ������� �����.
	if (age < 0)
	{
		cout << "------����� ������� - �� �� �������!------\n";
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
