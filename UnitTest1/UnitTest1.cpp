#include "pch.h"
#include "CppUnitTest.h"
#include "../pds_2/pds_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        // Тест для функції XOR
        TEST_METHOD(TestXOR)
        {
            Assert::IsTrue(XOR(false, true));
            Assert::IsTrue(XOR(true, false));
            Assert::IsFalse(XOR(false, false));
            Assert::IsFalse(XOR(true, true));
        }

        // Тест для функції fn
        TEST_METHOD(TestFn)
        {
            Assert::AreEqual(fn(false, false, false), false); // false ⊕ (false ⊕ false) = false
            Assert::AreEqual(fn(false, false, true), true);  // false ⊕ (false ⊕ true) = true
            Assert::AreEqual(fn(false, true, false), true);  // false ⊕ (true ⊕ false) = true
            Assert::AreEqual(fn(false, true, true), false);  // false ⊕ (true ⊕ true) = false
            Assert::AreEqual(fn(true, false, false), true);  // true ⊕ (false ⊕ false) = true
            Assert::AreEqual(fn(true, false, true), false);  // true ⊕ (false ⊕ true) = false
            Assert::AreEqual(fn(true, true, false), false);  // true ⊕ (true ⊕ false) = false
            Assert::AreEqual(fn(true, true, true), true);    // true ⊕ (true ⊕ true) = true
        }
	};
}