// Tyuiu.SolievAH.Spirnt0.Task1.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello world!\n";
	cout << "������� ��� ����� ������ �� ����������: ";
	char space = ' ';
	string firstname, secondname, thirdname = " ";
	cin >> secondname >> firstname >> thirdname;
	int age = 0;
	cout << "������� ��� �������: ";
	cin >> age;
	cout << "������������," << space << secondname << space << firstname << space << thirdname;
	cout << ". ��� �������:" << space << age;
	return 0;
}

