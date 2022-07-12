#include<iostream>
#include "Doubly.h"
#include "Student.h"
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);



	Doubly<Student> list;
	int action = 0;
	do
	{
		cout << "0.�����\n";
		cout << "1.������ ��������\n";
		cout << "2.������ ��������\n";
		cout << "3.�������� ��������\n";
		cout << "4.����������� ������ ��������\n";
		cout << "5.��������� �������� �� �����\n";
		cout << "6.�������� �������� � ����\n";
		cout << "->_";
		cin >> action;
		switch (action)
		{
		case 1: {
			Student temp;
			cout << "������ ���:";
			cin >> temp;
			list.Add(temp);
			break;
		}
		case 2: {
			Student studentChange;
			cout << "������ ����� ��������, ���� ����� �����:\n";
			cin >> studentChange;
			bool isList = list.ItemIsList(studentChange);
			if (isList)
			{
				cout << "�������� ��������. ������ ���� ��������:";
				Student newStudent;
				cin >> newStudent;
				list.Change(studentChange, newStudent);
			}
			//list.Add(temp);
			break;
		}
		case 4: {
			cout << "������ ��� ��������:\n";
			list.ShowList();
		}
		}



	} while (action!=0);

	//Doubly<int> list;
	//list.Add(12);
	//list.Add(32);
	//list.Add(34);
	//list.ShowList();
	//list.SaveToFile("myData4.txt");
	//list.ReadDataFile("myData4.txt");
	//list.ShowList();

	//Doubly<Student> list;
	//Student st("���� ��������","098 22 33 123", 12);
	//list.Add(st);
	//Student st2("������ �������", "097 11 22 123", 18);
	//list.Add(st2);
	//list.SaveToFile("stud4.txt");
	
	// 
	/*Doubly<Student> myList;
	myList.ReadDataFile("stud4.txt");
	myList.ShowList();*/

	return 0;
}