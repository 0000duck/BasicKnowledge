#include "stdafx.h"
#include "HuaWei.h"
#include<stack>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

/*
push:��վ����
pop����ջ����
inCnt��ʣ��Ҫ��վ����
outCnt��ʣ��Ҫ��ջ����
*/
string foo(int push, int pop, int inCnt, int outCnt, int total)
{
	if (outCnt == total)
	{
		return 0;
	}
}

int test_�𳵽�վ()
{
	int N;
	while (cin >> N)
	{
		int tmp;
		vector<int> vec;
		for (int i = 0;i<N;i++)
		{
			cin >> tmp;
			vec.push_back(tmp);
		}
		sort(vec.begin(), vec.end());



	}
	return 0;
}