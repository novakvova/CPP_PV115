#include<iostream>
#include <iterator>
#include <list>
#include <ctime>
using namespace std;
#include <Windows.h>
#include "Person.h"
#include "Cook.h";
#include "Waiter.h";

int main() 
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	list<Person *> cafe;
	//Person* ivan= new Cook("Іван","5 розряд");
	//Person* semen = new Cook("Семен Васильович", "6 розряд");
	//Person* oksana = new Waiter("Оксана", "1000 грн.");
	//cafe.push_back(ivan);
	//cafe.push_back(semen);
	//cafe.push_back(oksana);

	//list<Person *>::iterator it;
	//ofstream out("persons.txt");
	//cout << "List input" << "\n";
	//for (it = cafe.begin(); it!= cafe.end(); ++it)
	//{
	//	(*it)->writeToFile(out); //cout << "\t" << (*it).getName();
	//}
	//cout << "\n";

	ifstream in("persons.txt");
	while (!in.eof())
	{
		Person* p;
		char temp[100];
		char name[100];
		in.getline(name, 100, '\n');
		cout << name;
		int type;
		in >> type;
		in.getline(temp,100, '\n');
		if (type == (int)COOK)
		{
			char level[100];
			in.getline(level, 100, '\n');
			p = new Cook(name, level);
		}
		if (type == (int)WAITER)
		{
			char tip[100];
			in.getline(tip, 100, '\n');
			p = new Waiter(name, tip);
		}
		cafe.push_back(p);

	}
	return 0;
}