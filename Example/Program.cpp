#include<iostream>
using namespace std;
#include <Windows.h>
#include "Student.h"
#include "Teacher.h";

const int NUMBERS = 2;

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//Person *student = new Student();
	//Student student("Василь Петрович",10.5);
	//student.setName("Петро");
	//.setName("Петро");
	//student.ShowInfo();

	/*Person *ivan = new Student();
	ivan->setName("Іван");
	ivan->ShowInfo();*/

	Person *p= new Student("Саша", 11);
	Person* i;
	i = p;
	i->ShowInfo();

	// Набір елементів
	Person* list[NUMBERS]; 
	for (int i = 0; i < NUMBERS; i++)
	{
		int action = 0;
		cout << "Вкажіть елемент, який хочете створити (1 - Студент, 2 - Викладач): ";
		cin >> action;
		if (action==1)
		{
			list[i] = new Student("Іван", 12);
		}
		else if (action == 2)
		{
			list[i] = new Teacher("Максим", 22, "Математика");
		}
	}
	cout << "Набір персон \n";
	for (int i = 0; i < NUMBERS; i++)
	{
		list[i]->ShowInfo();
	}

}
