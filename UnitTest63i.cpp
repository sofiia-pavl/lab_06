#include "pch.h"
#include "CppUnitTest.h"
#include "../lab63i/lab6.3.i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63i
{
	TEST_CLASS(UnitTest63i)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 5,2,-1,-5 };
			int u;
			u = Sum(a, 4);
			Assert::AreEqual(u, 1);
		}
	};
}
