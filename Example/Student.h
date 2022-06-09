#pragma once
#include<iostream>
using namespace std;

class Student {  //���� - �� �������� ��� ��������� ��'����. �� ����� ������� �� �������� ���� 
				 //	���������� - ��'����
	string name; //�� ������������ ������������ ������� private - ��������
	int m_age;	//�� ������������ ������������ ������� private - ��������

public: 
	Student();   //�� ������������
	Student(string name); //� �����������
	Student(const Student &student); //���������
	void setAge(int age);
	void setName(string name);
	int getAge();
	string getName();
	void ShowInfo();
};

