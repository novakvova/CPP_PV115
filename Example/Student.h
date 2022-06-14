#pragma once
#include<iostream>
using namespace std;
#include "Person.h";

class Student : public Person
{  //Клас - Це мереханіз для створення об'єктів. На основі класами ми створуємо його 
				 //	екземпляри - об'єкти
private:
	double mark;

public: 
	Student();   //по замовчуванню
	Student(const char *name, double mark); //з параметрами
	//Student(const Student &student); //копіювання
	//~Student();

	Student& operator=(const Student &);
	
	void ShowInfo();
};

