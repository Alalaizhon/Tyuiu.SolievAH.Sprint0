// Tyuiu.SolievAH.Sprint0.Task6.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "../Tyuiu.SolievAH.Sprint0.Task6.V1.Lib/Tyuiu.SolievAH.Sprint0.Task6.V1.Lib.cpp"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint0Task6* date = new Service1();
    float a, b = 0;
    cout << "решаем решаем решаем!! --> x / 3 / y + 6\n";
    cout << "Введите значения x и y через пробел!): ";
    cin >> a >> b;
    cout << "Result = " << date->Calculate(a,b);
    cout << endl;
    ;
}

