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
	cout << "Привет! данная программа генерирует случайное трехзначное число.\n"<< "Попробуй ввести свое число и проверить состоит ли это число из твоего)\n";
	char space = ' ';
	int a = rand() % 900 + 100;
	int b = 0;
	cout << "Введите свое число и испытайте свою удачу: \n";
	cin >> b; 
	cout << a << space << b << endl;
	cout << "Т_Т мне нечем тебя поздравить порадуйся за себя сам";
	return 0;
}