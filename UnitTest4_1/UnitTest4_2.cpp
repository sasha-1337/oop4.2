#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop4.2\oop4.1\Rectangle.cpp"
#include "../oop4.1/Rectangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangl a(2, 3);
			double t = a.P();
			Assert::AreEqual(t, 10.0);
		}
	};
}
