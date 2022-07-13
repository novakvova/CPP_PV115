#include<iostream>
#include "Doubly.h"
#include "Student.h"
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include<Windows.h>
using namespace std;
using namespace cv;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cv::Mat img = cv::imread("C:\\Users\\hp\\Desktop\\Images\\images.jpg");
	namedWindow("First OpenCV Application", WINDOW_AUTOSIZE);
	cv::imshow("First OpenCV Application", img);
	cv::moveWindow("First OpenCV Application", 0, 45);
	cv::waitKey(0);
	cv::destroyAllWindows();

	Doubly<Student> list;
	int action = 0;
	do
	{
		cout << "0.Вихід\n";
		cout << "1.Додати студента\n";
		cout << "2.Змінити студента\n";
		cout << "3.Видалити студента\n";
		cout << "4.Переглянути список студентів\n";
		cout << "5.Загрузити студентів із файла\n";
		cout << "6.Зберегти студентів у файл\n";
		cout << "->_";
		cin >> action;
		switch (action)
		{
		case 1: {
			Student temp;
			cout << "Вкажіть дані:";
			cin >> temp;
			list.Add(temp);
			break;
		}
		case 2: {
			Student studentChange;
			cout << "Вкажіть назву елемента, який треба мінять:\n";
			cin >> studentChange;
			bool isList = list.ItemIsList(studentChange);
			if (isList)
			{
				cout << "Студента знайдено. Вкажіть нове значення:";
				Student newStudent;
				cin >> newStudent;
				list.Change(studentChange, newStudent);
			}
			//list.Add(temp);
			break;
		}
		case 4: {
			cout << "Список усіх елементів:\n";
			list.ShowList();
		}
		}



	} while (action!=0);

	//Doubly<int> list;
	//list.Add(12);
	//list.Add(32);
	//list.Add(34);
	//list.ShowList();
	//list.SaveToFile("myData4.txt");
	//list.ReadDataFile("myData4.txt");
	//list.ShowList();

	//Doubly<Student> list;
	//Student st("Іван Петрович","098 22 33 123", 12);
	//list.Add(st);
	//Student st2("Оксана Павлівна", "097 11 22 123", 18);
	//list.Add(st2);
	//list.SaveToFile("stud4.txt");
	
	// 
	/*Doubly<Student> myList;
	myList.ReadDataFile("stud4.txt");
	myList.ShowList();*/

	return 0;
}