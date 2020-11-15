#include "pch.h"
#include "CppUnitTest.h"
#include "../lab64i/lab6.4.i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64i
{
	TEST_CLASS(UnitTest64i)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { 2,5,1 };
			int q;
			q = Sub(a, 3);
			Assert::AreEqual(q, 1);
		}
	};
}
