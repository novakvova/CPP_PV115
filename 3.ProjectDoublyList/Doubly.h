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
	Node* head; //це наша голова - елементе≥в у списку немаЇ

public:
	Doubly() {
		head = NULL;
	}

	void Add(T data)
	{
		if (head == NULL)   //якщо список пустий, елемент потрапл€Ї на початок
		{
			Node* myNode = new Node;
			myNode->data = data;
			myNode->prev = myNode->next = NULL;
			head = myNode;
		}
		else { //якщо елемент перший уже Ї, тод≥ перем≥щаЇмо у к≥нець
			Node* temp = head; //Temp - вказуЇ на перший елемент
			while (temp->next != NULL) //якщо temp уже у к≥нц≥
			{
				temp = temp->next; //перем≥щаЇмо на наступний елемент
			}
			Node* newNode = new Node();
			newNode->data = data;
			newNode->prev = temp;//«бер≥гаЇмо вказ≥вник на опередн≥й елемент
			temp->next = newNode; //” к≥нець додаЇмо новий елемент
		}
	}
	void AddBegin(T data)
	{
		if (head == NULL)   //якщо список пустий, елемент потрапл€Ї на початок
		{
			Node* myNode = new Node;
			myNode->data = data;
			myNode->prev = myNode->next = NULL;
			head = myNode;
		}
		else { //якщо елемент перший уже Ї, тод≥ перем≥щаЇмо у к≥нець
			Node* temp = head; //Temp - вказуЇ на перший елемент
			
			Node* newNode = new Node(); //65
			newNode->data = data;
			newNode->prev = NULL;
			newNode->next = temp; //додаЇмо переред першим елементом
			temp->prev = newNode;
			head = newNode;
		}
	}

	void ShowList()
	{
		Node* temp = head; //Temp - вказуЇ на перший елемент
		while (temp != NULL) //якщо temp уже у к≥нц≥
		{
			cout << temp->data << "\n";
			temp = temp->next; //перем≥щаЇмо на наступний елемент
		}
	}
};

