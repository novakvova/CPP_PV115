#pragma once
#include<iostream>
using namespace std;

class Student {  //Клас - Це мереханіз для створення об'єктів. На основі класами ми створуємо його 
				 //	екземпляри - об'єкти
	char* name; //По замовчуванню специфікатор доступу private - закритий
	int name_buffer;
	int m_age;	//По замовчуванню специфікатор доступу private - закритий

public: 
	Student();   //по замовчуванню
	Student(const char *name); //з параметрами
	Student(const Student &student); //копіювання
	~Student();

	Student& operator=(const Student &);
	void setAge(int age);
	void setName(const char *name);
	int getAge();
	string getName();
	void ShowInfo();
};

