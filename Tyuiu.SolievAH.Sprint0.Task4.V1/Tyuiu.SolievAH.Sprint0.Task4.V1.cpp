// Tyuiu.SolievAH.Sprint0.Task4.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.SolievAH.Sprint0.Task4.V1.Lib/Tyuiu.SolievAH.Sprint0.Task4.V1.Lib.cpp"
using namespace std;

int main()
{
    ISprint0Task4* date = new Service1();
    cout << "S =(a/b*c)/9\n" << "6, 2, 3, 9\n";
    cout << "Result = " << date->Calculate(6, 2, 3, 9);
    cout << endl;

}

