#include "stdafx.h"
#include "CppUnitTest.h"
#include "../LeetCodeCpp/LeetCodeCppTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeCppTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test_122)
		{
			// TODO: �ڴ�������Դ���
			int ret = test_122();
			Assert::AreEqual(2, ret);
		}

		TEST_METHOD(Test_278)
		{
			// TODO: �ڴ�������Դ���
			int ret = test_278(0x7FFFFFFF);
			Assert::AreEqual(1792997410, ret);
		}
	};
}