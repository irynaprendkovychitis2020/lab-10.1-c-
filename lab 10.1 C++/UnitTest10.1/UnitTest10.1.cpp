#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 10.1 C++/lab 10.1 C++.cpp"
#define TESTING

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101

{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool functionResult = find();

			Assert::AreEqual(false, functionResult);
		}
	};
}
