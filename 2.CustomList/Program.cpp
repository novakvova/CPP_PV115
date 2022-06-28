#include<iostream>
using namespace std;
#include<Windows.h>
#include "MyList.h"
#include "Student.h"


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	MyList<Student> students;
	Student vova("Новак Володимир", "096 765 89 76", 36);
	students.Add(vova);
	Student ilon("Ілон Маск", "096 987 89 76", 36);
	students.Add(ilon);
	Student ilona("Ілона Треба", "098 765 89 76", 30);
	students.Add(ilona);
	Student uhym("Юхим Нехочу", "095 765 89 76", 65);
	students.Add(uhym);

	//cout << (vova>uhym) << "\n";

	cout << "---------Students---------\n";
	cout << students << "\n";
	cout << "----Remove Ілон Маск--------\n";
	students.Remove(ilon);
	cout << students << "\n";

	/*cout << "-----Sort students-------\n";
	students.sort(true);
	cout << students << "\n";*/
	

	//students.sort();
	//cout << "---------Students sort---------\n";
	//cout << students << "\n";

	
	/*MyList<int> list;
	list.Add(12);
	list.Add(-2);
	list.Add(13);
	list.Add(19);

	cout << "List: "<<list.size()<<"\n";
	cout << list;

	list.sort(true);
	cout << "List sort: \n";
	cout << list;*/





	/*list.Remove(12);
	cout << "Remove element 12: \n";
	cout << list;*/

	return 0;
}