// λ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "BitOperation.h"
#include<iostream>
using namespace std;

int main()
{
	//���������Ӧ�Ķ�����λ��Ϊ�������λ�Ľ��ֵΪ1������Ϊ0��
	//11 & 3=3
	cout << (11 & 3) << endl;
	//���������Ӧ�Ķ�����λֻҪ��һ����1���������1������Ϊ0��
	//11 | 3 = 11
	cout << (11 | 3) << endl;
	//������ͬ��������0����֮��1
	//11^3 = 8
	cout << (11 ^ 3) << endl;
	cout << (~5) << endl;
    return 0;
}

