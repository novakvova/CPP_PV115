#include<iostream>
using namespace std;
#include <Windows.h>
#include "Student.h"

struct SStudent {
//�� ������������ ������������ ������� ��� public - ����� ��������-��������� ��� ���
	string name; //���� name - ��� �����
	int age;	 //���� age - ��� ���� �����
};


void main() 
{
	SetConsoleOutputCP(1251); 
	SetConsoleCP(1251);
	/*SStudent ivan;
	ivan.name = "����";
	ivan.age = 21;
	cout << ivan.name << "\t" << ivan.age;*/

	//�������� ���'��
	//���� ����� �� petro ��� ��������


	Student petro("����"); //�� ��'���� - petro, ��������� �� ����� ����� Student.
	petro.setAge(25);
	petro.ShowInfo();

	if (1)
	{
		Student ivanka("������");
		ivanka = petro; //�������� ���������
		ivanka.ShowInfo();
	}

	//������ ����������� ���������
	Student newPetro(petro);
	newPetro.ShowInfo();
	

	

	/*cout << "����� ��'���� ��� ��������:" << sizeof(petro) << "\n";
	cout<<"����� ���� m_age:" << sizeof(petro.getAge())<<"\n";
	cout << "����� ���� name:" << sizeof(petro.getName()) << "\n";
	petro.setName("����� ���������� ������");
	petro.setAge(20);
	petro.ShowInfo();
	cout << "����� ��'���� ���� ������� ��������:" << sizeof(petro) << "\n";
	cout << "����� ���� m_age:" << sizeof(petro.getAge()) << "\n";
	cout << "����� ���� name:" << sizeof(petro.getName()) << "\n";*/

	//cout << "�����\n";
}
