#include<iostream>
#include<fstream>
#include<Windows.h>
#include<vector>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//cerr << "������� ������ ��������\n";
	//exit(EXIT_FAILURE);
	try {
		//throw exception("�������� ��� �����");
		/*ifstream in("myapp.txt");
		if (!in.is_open())
		{
			throw exception("������� �������� �����");
		}
		int z;
		in >> z;
		if (z == 0)
		{
			throw (23);
		}
		in.close();*/


		vector<int> list;
		list.push_back(12);
		list.push_back(18);
		//list.pop_back(); //�������� ������ �� ���� �������
		/*for (int i = 0; i < list.size(); i++)
		{
			cout << "Item " << list[i] << "\n";
		}*/
		vector<int>::iterator pr;
		for (pr=list.begin(); pr!=list.end(); pr++)
		{
			cout << *pr << "\n";
		}
	}
	catch (int ex)
	{
		cerr << "����� �� ���� ���� 0\n";
	}
	catch(exception ex)
	{
		cerr << "������� "<<ex.what()<<"\n";
	}
	cout << "Hello\n";
	return 0;
}