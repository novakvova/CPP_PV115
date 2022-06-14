#pragma once
#include<iostream>
using namespace std;
#include "Person.h";

class Student : public Person
{  //���� - �� �������� ��� ��������� ��'����. �� ����� ������� �� �������� ���� 
				 //	���������� - ��'����
private:
	double mark;

public: 
	Student();   //�� ������������
	Student(const char *name, double mark); //� �����������
	//Student(const Student &student); //���������
	//~Student();

	Student& operator=(const Student &);
	
	void ShowInfo();
};

