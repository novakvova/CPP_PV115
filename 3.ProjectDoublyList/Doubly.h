#pragma once
template <typename T> class Doubly
{

private:
	class Node
	{
	public:
		int data;
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
			newNode->prev = NULL;
			temp->next = newNode; //� ����� ������ ����� �������
			newNode->prev = temp; //�������� �������� �� �������� �������
		}
	}
};

