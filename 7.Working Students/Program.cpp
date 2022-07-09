#include<iostream>
#include "Doubly.h"
#include "Student.h"
using namespace std;
#include<Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//Doubly<int> list;
	//list.Add(12);
	//list.Add(32);
	//list.Add(34);
	//list.ShowList();
	//list.SaveToFile("myData4.txt");
	//list.ReadDataFile("myData4.txt");
	//list.ShowList();

	//Doubly<Student> list;
	//Student st("Іван Петрович","098 22 33 123", 12);
	//list.Add(st);
	//Student st2("Оксана Павлівна", "097 11 22 123", 18);
	//list.Add(st2);
	//list.SaveToFile("stud4.txt");
	
	// 
	Doubly<Student> myList;
	myList.ReadDataFile("stud4.txt");
	myList.ShowList();

	return 0;
}