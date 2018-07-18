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
	cout << endl << "�������PostOrderTraverse" << endl;
	tree.PostOrderTraverse();
	cout << endl << "�������PostOrderTraverseRecursion��" << endl;
	tree.PostOrderTraverseRecursion();
	cout << endl << "���������" << endl;
	tree.LevelOrderTraverse();

	int searchValue[10] = { 
		13,8,8,15,6,
		14,9,9,25,25 };
	BinaryTree<int> searchTree;
	for each (int var in searchValue)
	{
		searchTree.Insert(var);
	}
	cout << endl << "�������������������" << endl;
	searchTree.LevelOrderTraverse();
	cout << endl << "����������FindMin��" << endl;
	auto searchTreeMin = searchTree.FindMin(searchTree.GetRoot());
	cout << searchTreeMin->value << endl;
	cout << endl << "����������FindMax��" << endl;
	auto searchTreeMax = searchTree.FindMax(searchTree.GetRoot());
	cout << searchTreeMax->value << endl;
	cout << endl << "����������FindFloor��" << endl;
	auto searchTreeNear = searchTree.FindFloor(7, searchTree.GetRoot());
	cout << searchTreeNear->value << endl;
	cout << endl << "����������Find�����ڣ�" << endl;
	auto searchTreeFind1 = searchTree.Find(7, searchTree.GetRoot());
	if (searchTreeFind1==nullptr)
	{
		cout << "nullptr" << endl;
	}
	else
	{
		cout << searchTreeFind1->value << endl;
	}
	cout << endl << "����������Find(14, searchTree.GetRoot())��" << endl;
	auto searchTreeFind2 = searchTree.Find(14, searchTree.GetRoot());
	if (searchTreeFind2 == nullptr)
	{
		cout << "nullptr" << endl;
	}
	else
	{
		cout << searchTreeFind2->value << endl;
	}

	searchTree.Insert(7);
	searchTree.Insert(16);
	cout << endl << "����7,16��Ĳ��������" << endl;
	searchTree.LevelOrderTraverse();
	searchTree.Remove(9, searchTree.GetRoot());
	cout << endl << "Remove(9��Ĳ��������" << endl;
	searchTree.LevelOrderTraverse();
	searchTree.Remove(6, searchTree.GetRoot());
	cout << endl << "Remove(6��Ĳ��������" << endl;
	searchTree.LevelOrderTraverse();
	searchTree.Remove(15, searchTree.GetRoot());
	cout << endl << "Remove(15��Ĳ��������" << endl;
	searchTree.LevelOrderTraverse();
	//cout << "���ߣ�" << endl;
	//cout << tree.getHeight() << endl;

	system("pause");
	return 0;
}

