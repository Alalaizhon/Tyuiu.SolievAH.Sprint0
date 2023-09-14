#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.SolievAH.Sprint0.Task5.V1.Lib/Tyuiu.SolievAH.Sprint0.Task5.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Service1();
			int a = 9;
			double b = 7.5;
			int c = 5;
			double d;
			d = date->Zadacha(a, b, c);

			Assert::AreEqual(337.5, d);
		}
	};
}
