// Tyuiu.SolievAH.Sprint0.Task5.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint0Task5
{
	virtual float Zadacha(float a, float b, float c) override
	{

		return a * b * c;

	};

};