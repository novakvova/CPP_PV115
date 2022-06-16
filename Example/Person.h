#pragma once
#include<iostream>
using namespace std;
class Person
{
private:
	char* name; //�� ������������ ������������ ������� private - ��������
	int name_buffer;
	int m_age;	//�� ������������ ������������ ������� private - ��������

protected:
	Person();   //�� ������������
	Person(const char* name); //� �����������
	Person(const Person& student); //���������

public:

	~Person();

	void setAge(int age);
	void setName(const char* name);
	void setName(const string name);
	int getAge();
	string getName();

	virtual void ShowInfo();
};

