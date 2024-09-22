#include "pch.h"
#include "CppUnitTest.h"
#include "../pds_2/pds_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

        TEST_METHOD(TestFn)
        {
            Assert::AreEqual(fn(false, false, false), false);
            Assert::AreEqual(fn(false, false, true), false);
            Assert::AreEqual(fn(false, true, false), false);
            Assert::AreEqual(fn(false, true, true), false);

            Assert::AreEqual(fn(true, false, false), true);
            Assert::AreEqual(fn(true, false, true), false);
            Assert::AreEqual(fn(true, true, false), false);
            Assert::AreEqual(fn(true, true, true), false);
        }
	};
}