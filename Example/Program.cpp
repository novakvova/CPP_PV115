#include<iostream>
using namespace std;
#include <Windows.h>
#include "Student.h"

struct SStudent {
//По замовчуванню специфікатор доступу іде public - тобто загально-доступний для усіх
	string name; //Поле name - тип рядок
	int age;	 //Поле age - тип ціле число
};


void main() 
{
	SetConsoleOutputCP(1251); 
	SetConsoleCP(1251);
	/*SStudent ivan;
	ivan.name = "Іван";
	ivan.age = 21;
	cout << ivan.name << "\t" << ivan.age;*/

	//Виділення пам'яті
	//Який розмір має petro при створенні


	Student petro("Іван"); //Це об'єкти - petro, створений на основі класа Student.
	petro.setAge(25);
	petro.ShowInfo();

	if (1)
	{
		Student ivanka("Іванка");
		ivanka = petro; //оператор присвоєння
		ivanka.ShowInfo();
	}

	//Виклик конструтора копіювання
	Student newPetro(petro);
	newPetro.ShowInfo();
	

	

	/*cout << "Розмір об'єкта при створенні:" << sizeof(petro) << "\n";
	cout<<"Розмір поля m_age:" << sizeof(petro.getAge())<<"\n";
	cout << "Розмір поля name:" << sizeof(petro.getName()) << "\n";
	petro.setName("Петро Васильович Пороть");
	petro.setAge(20);
	petro.ShowInfo();
	cout << "Розмір об'єкта після надання значення:" << sizeof(petro) << "\n";
	cout << "Розмір поля m_age:" << sizeof(petro.getAge()) << "\n";
	cout << "Розмір поля name:" << sizeof(petro.getName()) << "\n";*/

	//cout << "Привіт\n";
}
