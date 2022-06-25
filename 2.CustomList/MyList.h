#pragma once
#include<iostream>
using namespace std;
template <typename T> class MyList
{
private:
	struct MyNode {
		T data;      //���������� ��� �������� �����
		MyNode* Next;  //�������� �� ��������� �������
	};

	MyNode* head; //�� ���� ������ - ��������� � ������ ����

public:
	MyList() {
		head = NULL;
	}

	void Add(T data)
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
	

	friend ostream& operator<<(ostream& out, const MyList& myList)
	{
		MyNode* temp = myList.head; //Temp - ����� �� ������ �������
		while (temp != NULL) //���� temp ��� � ����
		{
			cout << temp->data << "\n";
			temp = temp->Next; //��������� �� ��������� �������
		}
		return out;
	}

	bool Remove(T data) {
		MyNode* temp = head; //�������� �������� �� �������
		MyNode* prev = NULL;
		//��������� ������ �������
		if (temp != NULL && temp->data == data) //���� �� ����������� �� �������
		{
			head = temp->Next; //�� ���� 1 ��� 2 �������
			delete temp; //������� ������
			return true;
		}
		else
		{
			//���������� ���� �� ������� �� ��������� ��������
			while (temp != NULL && temp->data != data) 
			{
				prev = temp; //������� ��������� �������
				temp = temp->Next; //���������� �� ���������
			}
			if (temp == NULL) //���� ������ �� ���� �������� �����
				return false;

			prev->Next = temp->Next;   //���������� ����� ����� 1

			delete temp; //��������� ��������� �������
		}
	}
};

