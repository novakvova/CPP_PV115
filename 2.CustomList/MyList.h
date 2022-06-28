#pragma once
#include<iostream>
using namespace std;
template <typename T> class MyList
{
private:
	struct MyNode {
		T data;      //≤нформац≥€ про поточний вузол
		MyNode* Next;  //¬каз≥вник на наступний елемент
	};

	MyNode* head; //це наша голова - елементе≥в у списку немаЇ

public:
	MyList() {
		head = NULL;
	}

	void Add(T data)
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
	

	friend ostream& operator<<(ostream& out, const MyList& myList)
	{
		MyNode* temp = myList.head; //Temp - вказуЇ на перший елемент
		while (temp != NULL) //якщо temp уже у к≥нц≥
		{
			cout << temp->data << "\n";
			temp = temp->Next; //перем≥щаЇмо на наступний елемент
		}
		return out;
	}

	bool Remove(T data) {
		MyNode* temp = head; //«бер≥гаЇмо вказ≥вник на початок
		MyNode* prev = NULL;
		//¬идал€Їмо перший елемент
		if (temp != NULL && temp->data == data) //якщо ми знаходимос€ на початку
		{
			head = temp->Next; //Ќа м≥сце 1 стаЇ 2 елемент
			delete temp; //ќчищаЇмо пам€ть
			return true;
		}
		else
		{
			//перебираЇмо поки не дойдемо до потр≥бного елемента
			while (temp != NULL && temp->data != data) 
			{
				prev = temp; //«ер≥гаЇмо попер≥дн≥й елемент
				temp = temp->Next; //переходимо на наступний
			}
			if (temp == NULL) //€кщо дойшли до к≥нц€ зваршуЇмо пошку
				return false;

			prev->Next = temp->Next;   //попередн≥й вказуЇ через 1

			delete temp; //видал€Їмо знайдений елемент
		}
	}

	int size() {
		int count = 0;
		MyNode* temp = head; //Temp - вказуЇ на перший елемент
		while (temp != NULL) //якщо temp уже у к≥нц≥
		{
			temp = temp->Next; //перем≥щаЇмо на наступний елемент
			count++;
		}
		return count;
	}

	void sort(bool revers=false) {
		int size = this->size();
		MyNode* temp = head;
		for (int i = 0; i < size-1; i++)
		{
			MyNode* next = temp->Next;   
			for (int j = i+1; j < size; j++)  //1 пор≥внюЇ ≥з ≥ншими елементами, 
				//€кщо в≥н мешний в≥н менший переставл€Їмо
			{
				if (revers)
				{
					if (!(temp->data>next->data))
					{
						T tempData = temp->data;
						temp->data = next->data;
						next->data = tempData;
					}
				}
				else if (temp->data > next->data)
				{
					T tempData = temp->data;
					temp->data = next->data;
					next->data = tempData;
				}
				next = next->Next;
			}
			temp = temp->Next;
		}
	}
};

