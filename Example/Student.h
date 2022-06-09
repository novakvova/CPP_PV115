#pragma once
#include<iostream>
using namespace std;

class Student {  //Клас - Це мереханіз для створення об'єктів. На основі класами ми створуємо його 
				 //	екземпляри - об'єкти
	string name; //По замовчуванню специфікатор доступу private - закритий
	int m_age;	//По замовчуванню специфікатор доступу private - закритий

public: 
	Student();   //по замовчуванню
	Student(string name); //з параметрами
	Student(const Student &student); //копіювання
	void setAge(int age);
	void setName(string name);
	int getAge();
	string getName();
	void ShowInfo();
};

