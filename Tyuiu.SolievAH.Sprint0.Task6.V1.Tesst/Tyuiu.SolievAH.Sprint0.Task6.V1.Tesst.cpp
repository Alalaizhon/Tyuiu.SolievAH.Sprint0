#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.SolievAH.Sprint0.Task6.V1.Lib/Tyuiu.SolievAH.Sprint0.Task6.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task6* data = new Service1();
			float a = 60;
			int b = 2;
			int res;

			res = data->Calculate(a, b);

			Assert::AreEqual(16, res);
		}
	};
}
