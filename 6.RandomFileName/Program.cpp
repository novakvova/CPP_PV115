#include<iostream>
#include<fstream>
#include<ctime>;
using namespace std;
#include<Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	char dictionary[52];// { 'a', 'b', 'c', 'd'};
	
	char ch = 'Z'; // a - 97 z-122, A-65 Z-90
	//cout << (int)ch;
	int k = 0;
	for (int i = 65; i <= 90; i++)
	{
		dictionary[k++] = (char)i;
		//cout << (char)i << "\n";
	}
	for (int i = 97; i <= 122; i++)
	{
		dictionary[k++] = (char)i;
		//cout << (char)i << "\n";
	}
	string fileName="";
	while (true)
	{
		for (int i = 0; i < 9; i++)
		{
			int r = rand() % 52;
			fileName += dictionary[r];
		}
		fileName += ".txt";
		ifstream in(fileName);
		if (!in.is_open())
			break;
		in.close();
	}
	cout << fileName << "\n";
	
	/*for (int i = 0; i < 52; i++)
	{
		cout << dictionary[i] << "\n";
	}*/
	return 0;
}