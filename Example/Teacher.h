#pragma once
#include "Person.h";

class Teacher: public Person
{
private:
	string subject;

public:
	Teacher()
	{

	}
	Teacher(const char * name, int age, const char *subject) : Person(name)
	{
		this->subject = subject;
	}
	void SetSubject(string subject) { this->subject = subject; }
	string GetSubject() { return subject; }
	void ShowInfo() {
		Person::ShowInfo();
		cout << "Предмет: " << subject << "\n";
	}
};

