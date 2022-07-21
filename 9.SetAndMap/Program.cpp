#include<iostream>
#include<Windows.h>
#include<set>
#include<map>
using namespace std;
void testSet();
void testMap();

int main() 
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	//testSet();
	testMap();

	return 0;
}

void testSet()
{
	set<string> marks;
	marks.insert("��������");
	marks.insert("³������");
	marks.insert("������");
	marks.insert("������");
	marks.insert("�������");
	marks.insert("������");

	set<string>::iterator itr;
	for (itr = marks.begin(); itr != marks.end(); itr++)
	{
		cout << *itr << "\n";
	}

	//marks.erase(marks.begin(), marks.find(3));
	set<string>::iterator findData = marks.find("������");
	//cout << "Delete item "<<del<<"\n";
	cout << "Find list : " << *findData;
	/*for (itr = marks.begin(); itr != marks.end(); itr++)
	{
		cout << *itr << "\n";
	}*/
}

void testMap() {
	map<string, string> mymap = {
		{"��������", "������"},
		{"³������", "�������"},
		{"������", "������"},
		{"������", "������"}
	};

	map<string, string>::iterator itr;

	for (itr=mymap.begin(); itr!=mymap.end(); itr++)
	{
		cout << itr->first << "\t" << itr->second<<"\n";
	}
}