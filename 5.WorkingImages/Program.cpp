#include<iostream>
#include<fstream>
using namespace std;
#include<Windows.h>
#include <direct.h>

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	_mkdir("images");
	char imagePath[100];
	cout << "¬каж≥ть назву файла:\n";
	cin.getline(imagePath, 100, '\n');
	cout << "Path: " << imagePath << "\n";
	string fileSaveName = "images\\myimg.jpg";
	ofstream out(fileSaveName, ios::binary);
	ifstream reader(imagePath, ios::binary);
	char byte[1];
	while (reader.read(byte, 1))
	{
		//cout << byte << "\n";
		out.write(byte,1);
	}
	reader.close();
	out.close();
	return 0;
}