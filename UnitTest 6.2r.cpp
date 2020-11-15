#include "pch.h"
#include "CppUnitTest.h"
#include "../lab62/lab6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62r
{
	TEST_CLASS(UnitTest62r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 2,5,-1,3,1 };
			int q;
			q = Max(a, 5, 2, 0);
			Assert::AreEqual(q, 5);
		}
	};
}
