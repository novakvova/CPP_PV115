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
	if (head == NULL)   //якщо список пустий, елемент потрапл€Ї на початок
	{
		MyNode* myNode = new MyNode;
		myNode->data = data;
		myNode->Next = NULL;
		head = myNode;
	}
	else { //якщо елемент перший уже Ї, тод≥ перем≥щаЇмо у к≥нець
		MyNode* temp = head; //Temp - вказуЇ на перший елемент
		while (temp->Next != NULL) //якщо temp уже у к≥нц≥
		{
			temp = temp->Next; //перем≥щаЇмо на наступний елемент
		}
		MyNode* newNode = new MyNode();
		newNode->data = data;
		newNode->Next = NULL;
		temp->Next = newNode; //” к≥нець додаЇмо новий елемент
	}
}
