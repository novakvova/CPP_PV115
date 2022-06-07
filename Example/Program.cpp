#include<iostream>
using namespace std;
#include <Windows.h>

struct SStudent {
//�� ������������ ������������ ������� ��� public - ����� ��������-��������� ��� ���
	string name; //���� name - ��� �����
	int age;	 //���� age - ��� ���� �����
};

class Student {  //���� - �� �������� ��� ��������� ��'����. �� ����� ������� �� �������� ���� 
				 //	���������� - ��'����

	string name; //�� ������������ ������������ ������� private - ��������
	int m_age;	//�� ������������ ������������ ������� private - ��������

public: 	//���� public �������, �� ���� � ����� ����� ������� �� ����.
	Student() { //����� ����� ����� ������� �� ������ ������ - ����������(��������� ����������� ��'����)
		name = "����� ����� ����� ������� �� ������ ������ ----------------------------------------------------------------------- ����������(��������� ����������� ��'����)";
		setAge(18);
	}
	//��� ���� �������� age.
	void setAge(int age) { //����� - �� ������� � ������� �����.
		if (age < 0)
		{
			cout << "------����� ������� - �� �� �������!------\n";
			return;
		}
		m_age = age;
	}
	void setName(string name)
	{
		this->name = name;
	}
	int getAge() { return m_age; }
	string getName() { return name; }
	
	void ShowInfo() {
		cout <<name <<"\t"<<m_age<<"\n";
	}
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
	Student petro;  //�� ��'���� - petro, ��������� �� ����� ����� Student.
	cout << "����� ��'���� ��� ��������:" << sizeof(petro) << "\n";
	cout<<"����� ���� m_age:" << sizeof(petro.getAge())<<"\n";
	cout << "����� ���� name:" << sizeof(petro.getName()) << "\n";
	petro.setName("����� ���������� ������");
	petro.setAge(20);
	petro.ShowInfo();
	cout << "����� ��'���� ���� ������� ��������:" << sizeof(petro) << "\n";
	cout << "����� ���� m_age:" << sizeof(petro.getAge()) << "\n";
	cout << "����� ���� name:" << sizeof(petro.getName()) << "\n";

	//cout << "�����\n";
}