#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.SolievAH.Sprint0.Task7.V1.Lib/Tyuiu.SolievAH.Sprint0.Task7.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(TestMethod7)
		{
			ISprint0Task7* data = new Service1();
			int a = 570;
			int b = 7;
			bool n = data->Rezalt(a, b);

			Assert::AreEqual(true, n);
		}
	};
}
