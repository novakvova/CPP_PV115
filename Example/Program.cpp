#include<iostream>
using namespace std;
#include <Windows.h>

struct SStudent {
//По замовчуванню специфікатор доступу іде public - тобто загально-доступний для усіх
	string name; //Поле name - тип рядок
	int age;	 //Поле age - тип ціле число
};

class Student {  //Клас - Це мереханіз для створення об'єктів. На основі класами ми створуємо його 
				 //	екземпляри - об'єкти

	string name; //По замовчуванню специфікатор доступу private - закритий
	int m_age;	//По замовчуванню специфікатор доступу private - закритий

public: 	//Блок public значить, що даній у цьому блоці доступін на зовні.
	Student() { //метод назва якого співпада із назвою каласа - констуктор(початкова ініціалізація об'єкта)
		name = "метод назва якого співпада із назвою каласа ----------------------------------------------------------------------- констуктор(початкова ініціалізація об'єкта)";
		setAge(18);
	}
	//Для зміни значення age.
	void setAge(int age) { //метод - це функція в середині класу.
		if (age < 0)
		{
			cout << "------Даний студент - ще не родився!------\n";
			return;
		}
		m_age = age;
	}
	void setName(string name)
	{
		this->name = name;
	}
	int getAge() { return m_age; }
	string getName() { return name; }
	
	void ShowInfo() {
		cout <<name <<"\t"<<m_age<<"\n";
	}
};

void main() 
{
	SetConsoleOutputCP(1251); 
	SetConsoleCP(1251);
	/*SStudent ivan;
	ivan.name = "Іван";
	ivan.age = 21;
	cout << ivan.name << "\t" << ivan.age;*/

	//Виділення пам'яті
	//Який розмір має petro при створенні
	Student petro;  //Це об'єкти - petro, створений на основі класа Student.
	cout << "Розмір об'єкта при створенні:" << sizeof(petro) << "\n";
	cout<<"Розмір поля m_age:" << sizeof(petro.getAge())<<"\n";
	cout << "Розмір поля name:" << sizeof(petro.getName()) << "\n";
	petro.setName("Петро Васильович Пороть");
	petro.setAge(20);
	petro.ShowInfo();
	cout << "Розмір об'єкта після надання значення:" << sizeof(petro) << "\n";
	cout << "Розмір поля m_age:" << sizeof(petro.getAge()) << "\n";
	cout << "Розмір поля name:" << sizeof(petro.getName()) << "\n";

	//cout << "Привіт\n";
}