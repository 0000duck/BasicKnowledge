#include "stdafx.h"
#include <vector>
using namespace std;

/**
* Definition for a binary tree node.
*/
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	/*
	���100���ڵ㣬�����7��
	1��root->val==0�������ڵ���1������֦
	2��root->val==0�������ڵ�û��1����֦
	*/
	TreeNode* pruneTree(TreeNode* root) {
		if (root == nullptr)
		{
			return root;
		}

		//ɾ����������Ҷ�ӽڵ�Ϊ0�ģ�ɾ����ˢ��ԭ��
		root->left = pruneTree(root->left);
		//����������
		root->right = pruneTree(root->right);
		//��-��-��
		if (!root->left && !root->right&&root->val == 0)
		{
			delete root;
			root = nullptr;
		}

		return root;
	}
};