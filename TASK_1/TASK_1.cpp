#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TASK1
{
	TEST_CLASS(TASK1)
	{
	public:
		
		TEST_METHOD(gettingPerimeter)
		{
			int length = 4;
			int width = 5;
			int expectedPerimeter = 18;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(expectedPerimeter, result);
		}

		TEST_METHOD(gettingArea)
		{
			int length = 3;
			int width = 5;
			int expectedArea = 15;
			int result = getArea(&length, &width);
			Assert::AreEqual(expectedArea, result);
		}

		TEST_METHOD(settingLength)
		{
			int length = 0;
			setLength(26, &length);
			Assert::AreEqual(26, length);
		}

		TEST_METHOD(settingLengthEdgeCase)
		{
			int length = 0;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}

		TEST_METHOD(settingLengthInvalidRange)
		{
			int length = 0;
			setLength(100, &length);
			Assert::AreEqual(100, length);
		}

		TEST_METHOD(settingWidth)
		{
			int width = 0;
			setWidth(42, &width);
			Assert::AreEqual(42, width);
		}

		TEST_METHOD(settingWidthEdgeCase)
		{
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}

		TEST_METHOD(settingWidthInvalidRange)
		{
			int width = 0;
			setWidth(100, &width);
			Assert::AreEqual(100, width);
		}
	};
}
