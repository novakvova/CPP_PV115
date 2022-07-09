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

	void SaveToFile(const char* filePath)
	{
		ofstream out(filePath);
		Node* temp = head; //Temp - вказуЇ на перший елемент
		while (temp != NULL) //якщо temp уже у к≥нц≥
		{
			out<<temp->data<<"\n";
			temp = temp->next; //перем≥щаЇмо на наступний елемент
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
		Node* temp = head; //Temp - вказуЇ на перший елемент
		while (temp != NULL) //якщо temp уже у к≥нц≥
		{
			cout << temp->data << "\n";
			temp = temp->next; //перем≥щаЇмо на наступний елемент
		}
	}
};