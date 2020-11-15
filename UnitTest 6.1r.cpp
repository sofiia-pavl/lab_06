#include "pch.h"
#include "CppUnitTest.h"
#include "../lab61/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61r
{
	TEST_CLASS(UnitTest61r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 2,5,8,9 };
			int w;
			w = Sumn(a, 4, 0, 0);
			Assert::AreEqual(w, 4);
		}
	};
}
