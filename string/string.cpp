// string.cpp : �������̨Ӧ�ó������ڵ㡣
// ��׼C++��string�࣬����Ҫ#include<string>��using namespace std;
// Ȼ��Ϳ�����string/wstring�ˣ��������ֱ��Ӧ��char��wchar_t

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;

/*
��ʼ������demo
*/
void InitialDemo()
{
	string str1(5, 'c');//��ʼ��Ϊ5��'c'
	string str2("Now is the time...");
	string str3(str2, 11, 4);//��str2�ĵ�11���ַ���ʼ����ȡ4���ַ�
	string str4;
	str4.append(3, 'h');//����3��'h'
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
}



int main()
{
	InitialDemo();
	system("pause");
    return 0;
}

