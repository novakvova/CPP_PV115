#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	char* name; //По замовчуванню специфікатор доступу private - закритий
	int name_buffer;
	int m_age;	//По замовчуванню специфікатор доступу private - закритий

public:
	Person();   //по замовчуванню
	Person(const char* name); //з параметрами
	Person(const Person& student); //копіювання
	~Person();

	void setAge(int age);
	void setName(const char* name);
	void setName(const string name);
	int getAge();
	string getName();
};

