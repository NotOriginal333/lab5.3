#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.3/lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double h;
			h = f(1);
			Assert::AreEqual(h, 1.09615, 0.00001);
		}
	};
}
