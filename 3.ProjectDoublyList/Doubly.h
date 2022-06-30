#pragma once
#include <iostream>
using namespace std;

template <typename T> class Doubly
{

private:
	class Node
	{
	public:
		T data;
		Node* next; // Pointer to next node in DLL
		Node* prev; // Pointer to previous node in DLL
	};
	Node* head; //�� ���� ������ - ��������� � ������ ����

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
	void AddBegin(T data)
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
			
			Node* newNode = new Node(); //65
			newNode->data = data;
			newNode->prev = NULL;
			newNode->next = temp; //������ ������� ������ ���������
			temp->prev = newNode;
			head = newNode;
		}
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

