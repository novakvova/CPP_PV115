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
	//Student student("������ ��������",10.5);
	//student.setName("�����");
	//.setName("�����");
	//student.ShowInfo();

	/*Person *ivan = new Student();
	ivan->setName("����");
	ivan->ShowInfo();*/

	Person *p= new Student("����", 11);
	Person* i;
	i = p;
	i->ShowInfo();

	// ���� ��������
	Person* list[NUMBERS]; 
	for (int i = 0; i < NUMBERS; i++)
	{
		int action = 0;
		cout << "������ �������, ���� ������ �������� (1 - �������, 2 - ��������): ";
		cin >> action;
		if (action==1)
		{
			list[i] = new Student("����", 12);
		}
		else if (action == 2)
		{
			list[i] = new Teacher("������", 22, "����������");
		}
	}
	cout << "���� ������ \n";
	for (int i = 0; i < NUMBERS; i++)
	{
		list[i]->ShowInfo();
	}

}
