#include "pch.h"
#include "CppUnitTest.h"
#include "../lab63/lab6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63r
{
	TEST_CLASS(UnitTest63r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 5,2,-1,-5 };
			int q;
			q = Sum(a, 4, 0, 0);
			Assert::AreEqual(q, 1);
		}
	};
}
