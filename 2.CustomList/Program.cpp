#include<iostream>
using namespace std;
#include<Windows.h>
struct MyNode {
	int data;      //���������� ��� �������� �����
	MyNode* Next;  //�������� �� ��������� �������
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int data; // ��� �� ������� ����������
	MyNode* head=NULL; //�� ���� ������ - ��������� � ������ ����
	do
	{
		cout << "������ �����(-1 ��������� ��� �����): ";
		cin >> data;

		if (data == -1)
			break;

		if (head == NULL)   //���� ������ ������, ������� ��������� �� �������
		{
			MyNode *myNode = new MyNode;
			myNode->data = data;
			myNode->Next = NULL;
			head = myNode;
		}
		else { //���� ������� ������ ��� �, ��� ��������� � �����
			MyNode* temp = head; //Temp - ����� �� ������ �������
			while (temp->Next != NULL) //���� temp ��� � ����
			{
				temp = temp->Next; //��������� �� ��������� �������
			}
			MyNode* newNode = new MyNode();
			newNode->data = data;
			newNode->Next = NULL;
			temp->Next = newNode; //� ����� ������ ����� �������
		}
	} while (true);

	cout << "�� ����� ������� ����� ";
	MyNode* temp = head; //Temp - ����� �� ������ �������
	while (temp != NULL) //���� temp ��� � ����
	{
		cout << temp->data << "\t";
		temp = temp->Next; //��������� �� ��������� �������
	}
	
	return 0;
}