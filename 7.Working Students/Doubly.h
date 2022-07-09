#pragma once
#include<iostream>
#include<fstream>
using namespace std;

template <typename T> class Doubly
{
private:
	struct Node 
	{
		T data;
		Node* next;
		Node* prev;
	};
	Node* head;

public:
	Doubly() {
		head = NULL;
	}
	void Add(T data)
	{
		if (head == NULL)   //���� ������ ������, ������� ��������� �� �������
		{
			Node* myNode = new Node;
			myNode->data = data;
			myNode->prev = myNode->next = NULL;
			head = myNode;
		}
		else { //���� ������� ������ ��� �, ��� ��������� � �����
			Node* temp = head; //Temp - ����� �� ������ �������
			while (temp->next != NULL) //���� temp ��� � ����
			{
				temp = temp->next; //��������� �� ��������� �������
			}
			Node* newNode = new Node();
			newNode->data = data;
			newNode->prev = temp;//�������� �������� �� �������� �������
			temp->next = newNode; //� ����� ������ ����� �������
		}
	}

	void SaveToFile(const char* filePath)
	{
		ofstream out(filePath);
		Node* temp = head; //Temp - ����� �� ������ �������
		while (temp != NULL) //���� temp ��� � ����
		{
			out<<temp->data<<"\n";
			temp = temp->next; //��������� �� ��������� �������
		}
		out.close();
	}


	void ReadDataFile(const char* filePath)
	{
		ifstream in(filePath);
		
		while (!in.eof())
		{
			T tmp;
			in >> tmp;
			if (in.eof())
				break;
			this->Add(tmp);
		}
		in.close();
	}
	void ShowList() 
	{
		Node* temp = head; //Temp - ����� �� ������ �������
		while (temp != NULL) //���� temp ��� � ����
		{
			cout << temp->data << "\n";
			temp = temp->next; //��������� �� ��������� �������
		}
	}
};