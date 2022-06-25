#include "MyList.h"
#include<iostream>
using namespace std;

template <typename T>
MyList<T>::MyList() {
	head = NULL;
}
template <typename T>
void MyList<T>::Add(T data)
{
	if (head == NULL)   //���� ������ ������, ������� ��������� �� �������
	{
		MyNode* myNode = new MyNode;
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
}
