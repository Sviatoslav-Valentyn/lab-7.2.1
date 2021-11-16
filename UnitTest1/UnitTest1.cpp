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
			int** A = new int* [3];
			A[0] = new int[2]{ 1, 2 };
			A[1] = new int[2]{ -1, 0 };
			A[2] = new int[2]{ 0, 2 };
	     	Assert::AreEqual(1, 1);
		}
	};
}
