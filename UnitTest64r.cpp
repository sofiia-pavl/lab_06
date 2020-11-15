#include "pch.h"
#include "CppUnitTest.h"
#include "../lab64r/lab6.4.r.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64r
{
	TEST_CLASS(UnitTest64r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[2] = { 2,5 };
			int q;
			q = Sub(a,2, 0, 1);
			Assert::AreEqual(q, 1);
		}
	};
}
