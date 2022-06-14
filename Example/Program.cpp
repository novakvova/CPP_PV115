#include<iostream>
using namespace std;
#include <Windows.h>
#include "Student.h"




void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//Person *student = new Student();
	Student student("Василь Петрович",10.5);
	//student.setName("Петро");
	//.setName("Петро");
	student.ShowInfo();


}
