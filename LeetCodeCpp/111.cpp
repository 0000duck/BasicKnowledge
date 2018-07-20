#include "stdafx.h"
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int minDepth(TreeNode* root) {
		if (root == NULL)
			return 0;

		if (root->left == NULL)
		{
			//���
			return minDepth(root->right) + 1;
		}
		else if (root->right == NULL)
		{
			//��ǿգ��ҿ�
			return minDepth(root->left) + 1;
		}
		else
		{
			//���Ҷ����ǿյ�
			return min(minDepth(root->left), minDepth(root->right)) + 1;
		}
	}
};