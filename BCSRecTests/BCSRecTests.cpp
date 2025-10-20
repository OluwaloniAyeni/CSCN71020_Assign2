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

	};
}
