// Tyuiu.SolievAH.Sprint0.Task3.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.SolievAH.Sprint0.Task3.V0.Lib/Tyuiu.SolievAH.Sprint0.Task3.V0.Lib.cpp"
using namespace std;

int main()
{
    ISprint0Task3* date = new Service1();
    cout << "PetrovCA\n";
    cout << "P = a+b+c\n" <<"10, 11, 5\n";
    cout << "Result = " << date->SummV3(10, 11, 5);
    cout << endl;
    


};