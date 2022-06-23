#include<iostream>
using namespace std;
#include<Windows.h>
struct MyNode {
	int data;      //≤нформац≥€ про поточний вузол
	MyNode* Next;  //¬каз≥вник на наступний елемент
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int data; // ƒан≥ €к≥ вводить користувач
	MyNode* head=NULL; //це наша голова - елементе≥в у списку немаЇ
	do
	{
		cout << "¬вед≥ть число(-1 завершити вв≥д даних): ";
		cin >> data;

		if (data == -1)
			break;

		if (head == NULL)   //якщо список пустий, елемент потрапл€Ї на початок
		{
			MyNode *myNode = new MyNode;
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
	} while (true);

	cout << "¬и ввели наступн≥ числа ";
	MyNode* temp = head; //Temp - вказуЇ на перший елемент
	while (temp != NULL) //якщо temp уже у к≥нц≥
	{
		cout << temp->data << "\t";
		temp = temp->Next; //перем≥щаЇмо на наступний елемент
	}
	
	return 0;
}