// Tyuiu.SolievAH.Spirnt0.Task6.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <string>
#include <ctime>
#include "../Tyuiu.SolievAH.Sprint0.Task7.V1.Lib/Tyuiu.SolievAH.Sprint0.Task7.V1.Lib.cpp"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	cout << "������! ������ ��������� ���������� ��������� ����������� �����.\n"<< "�������� ������ ���� ����� � ��������� ������� �� ��� ����� �� ������)\n";
	char space = ' ';
	int a = rand() % 900 + 100;
	int b = 0;
	cout << "������� ���� ����� � ��������� ���� �����: \n";
	cin >> b; 
	cout << a << space << b << endl;
	cout << "�_� ��� ����� ���� ���������� ��������� �� ���� ���";
	return 0;
}