#include "stdafx.h"
/*
����һ�������ж��������Ƿ��л���

���ף�
���ܷ�ʹ�ö���ռ������⣿
*/
/**
* Definition for singly-linked list.
*/
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head) {
		//�������ɻ�
		//һ���ڵ��Ի�
		//һ�����������ɻ�
		if (!head) return false;
		ListNode *fast = head;
		ListNode *slow = head;
		do {
			/*If LinkNode exist NULL node,then return false*/
			if (!fast || !slow)
				return false;
			fast = fast->next;
			slow = slow->next;
			/*If LinkNode exist NULL node,then return false*/
			if (fast)
				fast = fast->next;
			else
				return false;
		} while (fast != slow);

		return true;
	}
};
