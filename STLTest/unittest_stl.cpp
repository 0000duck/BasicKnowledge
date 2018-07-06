#include "stdafx.h"
#include "CppUnitTest.h"
#include"../STL/stl_demo.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace STLTest
{		
	TEST_CLASS(UnitTestSTL)
	{
	private:
		const int arrSize = 10;
		int arr[10] = { 0,9,8,7,6,5,4,3,2,1 };
	public:
		
		TEST_METHOD(TestSet)
		{
			//���
			std::set<int> out;
			for (size_t i = 0; i < arrSize; i++)
			{
				out.insert(arr[i]);
			}
			SetDemo demo;
			demo.Insert(arr, arrSize);
			Assert::AreEqual(true, demo.IsEqual(out));
			//������ͬ���
			int tmp[1] = {5};
			demo.Insert(tmp, 1);
			Assert::AreEqual(true, demo.IsEqual(out));
			Assert::AreEqual(arrSize, (int)out.size());
			out.insert(5);
			Assert::AreEqual(arrSize, (int)out.size());
			//����
			Assert::AreEqual(true, demo.Find(5));
			Assert::AreEqual(false, demo.Find(50));
			Assert::AreEqual(1, demo.Count(3));
			Assert::AreEqual(0, demo.Count(30));
			//ɾ��
			demo.ElementDelete(5);
			Assert::AreEqual(false, demo.Find(5));
			Assert::AreEqual(0, demo.Count(5));
			Assert::AreEqual(false, demo.IsEqual(out));
			out.erase(5);
			Assert::AreEqual(true, demo.IsEqual(out));
			//���
			demo.Clear();
			auto innerSet = demo.GetInnerSet();
			int size = innerSet.size();
			Assert::AreEqual(0, size);

		}

	};
}