#include "pch.h"
#include "CppUnitTest.h"
#include "../lab62i/lab6.2.i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62i
{
	TEST_CLASS(UnitTest62i)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 2,5,-1,3,1 };
			int q;
			q = Max(a, 5);
			Assert::AreEqual(q, 5);
		}
	};
}
