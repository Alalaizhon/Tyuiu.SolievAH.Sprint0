// Tyuiu.SolievAH.Sprint0.Task7.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "../Tyuiu.SolievAH.Sprint0.Task7.V1.Lib/Tyuiu.SolievAH.Sprint0.Task7.V1.Lib.cpp"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ISprint0Task7* data = new Service1();
    cout << "������� ����������� �����: ";
    int a;
    cin >> a;
    cout << "������� ���� �����: ";
    int b;
    cin >> b;

    if (data->Rezalt(a, b)) cout << "\n\n��������� ����� " << b << " ���� ����---> " << a;
    else if (!data->Rezalt(a, b)) cout << "\n\n��������� ����� " << b << " ���� ����----> " << a;
    else cout << "\n\n� ��� ���-��!";

}