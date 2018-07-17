//
//TreeCpp.cpp : �������̨Ӧ�ó������ڵ㡣
//1������������֪ʶ�ܽ�
//https://blog.csdn.net/xiaoquantouer/article/details/65631708
//2��ǳ̸���ݽṹ-������
//http://www.cnblogs.com/polly333/p/4740355.html
//3����������C++ʵ��
//https://blog.csdn.net/ajay666/article/details/76736333
//4�������ݽṹ�������� ���� �������Ľ����ͱ�����C++ʵ�֣�
//https://www.jianshu.com/p/6e739de0d206
//
#include "stdafx.h"
#include "BiTree.h"
using namespace std;

int main()
{
	//BiTree a;
	//string s,s2;
	//s = "ABD##E#F##C##";
	//s2 = "1234567";
	//a.createBiTree(s2);
	//cout << "ǰ�������" << endl;
	//a.preOrder();
	//cout << "���������" << endl;
	//a.inOrder();
	//cout << "�������1��" << endl;
	//a.postOrder();
	//cout << "�������2��" << endl;
	//a.postOrder1();
	//cout << "���������" << endl;
	//a.levelOrder();
	//cout << "���ߣ�" << endl;
	//cout << a.getHeight() << endl;

	BinaryTree<int> tree(1);
	auto root = tree.GetRoot();
	tree.InsertLeftChild(tree.GetRoot(),2);
	tree.InsertRightChild(tree.GetRoot(), 3);
	tree.InsertLeftChild(tree.GetRoot()->left_node, 4);
	tree.InsertRightChild(tree.GetRoot()->left_node, 5);
	tree.InsertLeftChild(tree.GetRoot()->right_node, 6);
	tree.InsertRightChild(tree.GetRoot()->right_node, 7);
	
	cout << endl << "ǰ�������" << endl;
	tree.PreOrderTraverse();
	cout << endl << "ǰ�����PreOrderTraverseRecursion��" << endl;
	tree.PreOrderTraverseRecursion();
	cout << endl << "�������InOrderTraverse��" << endl;
	tree.InOrderTraverse();
	cout << endl << "�������InOrderTraverseRecursion��" << endl;
	tree.InOrderTraverseRecursion();
	cout << endl << "�������PostOrderTraverse��" << endl;
	tree.PostOrderTraverse();
	cout << endl << "�������PostOrderTraverseRecursion��" << endl;
	tree.PostOrderTraverseRecursion();
	cout << endl << "���������" << endl;
	tree.LevelOrderTraverse();
	//cout << "���ߣ�" << endl;
	//cout << tree.getHeight() << endl;

	system("pause");
	return 0;
}

