#include<iostream>
#include "Doubly.h"
using namespace std;
int main()
{
	cout << "Hello app\n";
	Doubly<int> doubly;
	doubly.Add(15);
	doubly.Add(25);
	doubly.Add(78);
	doubly.AddBegin(987);
	doubly.ShowList();
	return 0;
}