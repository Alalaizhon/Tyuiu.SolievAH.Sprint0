// Tyuiu.SolievAH.Sprint0.Task7.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint0Task7
{
	virtual bool Rezalt(int a, int b) override
	{
		bool numIsIntroduced = false;
		int firstNum = a / 100;
		int secondNum = a / 10 % 10;
		int thirdNum = a % 10;

		if (b == firstNum || b == secondNum || b == thirdNum) numIsIntroduced = true;

		return numIsIntroduced;
	};

};