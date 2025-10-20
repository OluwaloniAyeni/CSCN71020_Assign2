#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		TEST_METHOD(TestGetPerimeter_ValidInput)
		{
			int length = 10;
			int width = 5;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(30, result);
		}
		TEST_METHOD(TestGetArea_ValidInput)
		{
			int length = 10;
			int width = 5;
			int result = getArea(&length, &width);
			Assert::AreEqual(50, result);
		}
		TEST_METHOD(TestSetLength_ValidInput)
		{
			int length = 0;
			setLength(35, &length);
			Assert::AreEqual(35, length);
		}
		TEST_METHOD(TestSetLength_MinBoundary)
		{
			int length = 0;
			setLength(1, &length);
			Assert::AreEqual(1, length);
		}
		TEST_METHOD(TestSetLength_MaxBoundary)
		{
			int length = 0;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}


	};
}
