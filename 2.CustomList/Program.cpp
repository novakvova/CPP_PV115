#include<iostream>
using namespace std;
#include<Windows.h>
#include "MyList.h"


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	MyList<int> list;
	list.Add(12);
	list.Add(13);
	list.Add(19);

	cout << "List: \n";
	cout << list;

	list.Remove(12);
	cout << "Remove element 12: \n";
	cout << list;

	return 0;
}