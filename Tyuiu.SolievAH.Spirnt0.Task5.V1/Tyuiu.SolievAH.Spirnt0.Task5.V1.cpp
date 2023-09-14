// Tyuiu.SolievAH.Spirnt0.Task5.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "../Tyuiu.SolievAH.Sprint0.Task5.V1.Lib/Tyuiu.SolievAH.Sprint0.Task5.V1.Lib.cpp"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint0Task5* date = new Service1();
    int a, b, c = 0;
    cout << "V= a * b * c\n";
    cout << "¬ведите значени€ длины, ширины, высоты через пробел: ";
    cin >> a >> b >> c;
    cout << "Result = " << date->Zadacha(9, 7.5, 5);
    cout << endl;


    


}

