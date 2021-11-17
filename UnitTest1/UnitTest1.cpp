#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 7.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** R = new int* [2];
			for (int i = 0; i < 2;)R[i++] = new int[2];
			R[0][0] = 2;
			R[1][0] = 0;
			R[0][1] = -1;
			R[1][1] = 1;

			SmallestOfMaximumElements(R, 1, 2);
			Assert::AreEqual(-1, R[0][1]);
		}
	};
}
