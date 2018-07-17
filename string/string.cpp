// string.cpp : �������̨Ӧ�ó������ڵ㡣
// ��׼C++��string�࣬����Ҫ#include<string>��using namespace std;
// Ȼ��Ϳ�����string/wstring�ˣ��������ֱ��Ӧ��char��wchar_t
// ��Ҫ�ο�����
// 1����׼C++�е�string����÷��ܽᣨת�� 
// http://www.cnblogs.com/xFreedom/archive/2011/05/16/2048037.html

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

	cout << endl << "InitialDemo:" << endl;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cout << str4 << endl;
}

/*
��ֵ���滻demo
*/
void AssignReplaceDemo()
{
	cout << endl << "AssignReplaceDemo:" << endl;

	string str1, str2 = "War and Peace";
	str1.assign(str2, 4, 3);
	cout << str1 << endl;

	string s = "They say he carved it himself...from a BIGGER spoon";
	string s2 = "find your soul-mate, Homer.";

	s.replace(5, s2.length(), s2);
	//���Ϊ"They say he carved it himself...find your soul-mate, Homer."
	cout << s << endl;

}

void Change2CharDemo()
{
	cout << endl << "Change2CharDemo:" << endl;

	string str1 = "War and Peace";
	const char* chr = str1.c_str();
	cout << chr << endl;
}

int main()
{
	InitialDemo();
	AssignReplaceDemo();
	Change2CharDemo();
	system("pause");
    return 0;
}

