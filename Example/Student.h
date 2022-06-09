#pragma once
#include<iostream>
using namespace std;

class Student {  //���� - �� �������� ��� ��������� ��'����. �� ����� ������� �� �������� ���� 
				 //	���������� - ��'����
	char* name; //�� ������������ ������������ ������� private - ��������
	int name_buffer;
	int m_age;	//�� ������������ ������������ ������� private - ��������

public: 
	Student();   //�� ������������
	Student(const char *name); //� �����������
	Student(const Student &student); //���������
	~Student();

	Student& operator=(const Student &);
	void setAge(int age);
	void setName(const char *name);
	int getAge();
	string getName();
	void ShowInfo();
};

