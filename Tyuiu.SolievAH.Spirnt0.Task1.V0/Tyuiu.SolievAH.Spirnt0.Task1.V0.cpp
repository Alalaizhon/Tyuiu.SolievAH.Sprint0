// Tyuiu.SolievAH.Spirnt0.Task1.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello world!\n";
	cout << "Введите ФИО через пробел на английском: ";
	char space = ' ';
	string firstname, secondname, thirdname = " ";
	cin >> secondname >> firstname >> thirdname;
	int age = 0;
	cout << "Введите ваш возраст: ";
	cin >> age;
	cout << "Здравствуйте," << space << secondname << space << firstname << space << thirdname;
	cout << ". Ваш возраст:" << space << age;
	return 0;
}

