#include "stdafx.h"
#include "HuaWei.h"
#include <iostream>
using namespace std;

int test_37()
{
	int m;
	while (cin >> m)
	{
		//a:һ������������b����������������c�����������Ӹ���
		int a = 1, b = 0, c = 0;
		while (--m)
		{
			//ÿ��һ�����������仯
			c += b;
			b = a;
			a = c;
		}
		cout << a + b + c << endl;
	}
	return 0;
}