//
//TreeCpp.cpp : �������̨Ӧ�ó������ڵ㡣
//1������������֪ʶ�ܽ�
//https://blog.csdn.net/xiaoquantouer/article/details/65631708
//2��ǳ̸���ݽṹ-������
//http://www.cnblogs.com/polly333/p/4740355.html
//
#include "stdafx.h"
#include "BiTree.h"
using namespace std;

int main()
{
	BiTree a;
	string s;
	s = "ABD##E#F##C##";
	a.createBiTree(s);
	cout << "ǰ�������" << endl;
	a.preOrder();
	cout << "���������" << endl;
	a.inOrder();
	cout << "�������1��" << endl;
	a.postOrder();
	cout << "�������2��" << endl;
	a.postOrder1();
	cout << "���������" << endl;
	a.levelOrder();
	cout << "���ߣ�" << endl;
	cout << a.getHeight() << endl;

	system("pause");
	return 0;
}

