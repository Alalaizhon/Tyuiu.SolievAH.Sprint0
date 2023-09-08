// Tyuiu.SolievAH.Spirnt0.Task1.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Hello world!\n";
	cout << "Введите ФИО через пробел: ";
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


