#include "pch.h"
#include "CppUnitTest.h"
#include "../PR05.4/PR05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest054
{
	TEST_CLASS(UnitTest054)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = S1(5, 2);
			Assert::AreEqual(12.7267655113264423471543996693, result, 0.000000001);
		}
	};
}
