#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.4/Lab 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double test;
			test = S0(4);
			Assert::AreEqual(test, -1.07957, 0.00001);

			test = S1(4, 3);
			Assert::AreEqual(test, -1.07957, 0.00001);

			test = S2(4, 4);
			Assert::AreEqual(test, -1.07957, 0.00001);

			test = S3(4, 3, 0);
			Assert::AreEqual(test, -1.07957, 0.00001);

			test = S4(4, 4, 0);
			Assert::AreEqual(test, -1.07957, 0.00001);
		}
	};
}
