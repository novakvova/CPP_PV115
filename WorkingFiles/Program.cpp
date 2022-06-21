#include<iostream>
#include<fstream>
using namespace std;
#include <Windows.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	/*int a=23;
	string v="ќксана";
	int r = 18;
	string c = "ѕетро";
	ofstream outFile("myFile.txt");
	outFile << a << "\n";
	outFile << v << "\n";
	outFile << r << "\n";
	outFile << c << "\n";
	outFile.close();*/

	//int a, b;
 //   char c[100], d[100];
	//ifstream fin("myFile.txt");
	//fin >> a; //перем≥стило вказ≥вник до к≥нц€ ≥нта
	//cout << a << "\n";

	//fin.getline(c, 100, '\n'); //тут ми прочатали р€док до к≥нц€
	//cout << c << "\n";
	//
	//fin.getline(c, 100, '\n'); //тут уже читаЇмо сам р€док ќксана ≥з '\n'
	//cout << c << "\n";

	//fin >> b;
	//cout << b << "\n";

	//fin.getline(d, 100, '\n');
	//cout << d << "\n";

	//fin.getline(d, 100, '\n');
	//cout << d << "\n";

	//fin.close();
	
	int n, m, temp;
	ifstream fin("matrix.txt");
	fin >> n >> m;
	cout << n << '\t' << m << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			fin >> temp;
			cout << temp << "\t";
		}
		cout << '\n';
	}

	return 0;
}