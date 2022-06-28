#include<iostream>
#include "Doubly.h"
using namespace std;
int main()
{
	cout << "Hello app\n";
	Doubly<int> doubly;
	doubly.Add(15);
	doubly.Add(25);
	return 0;
}