#include "stdafx.h"
#include <vector>
using namespace std;

class Solution {
public:
	/*
	���е�int��Χ��3��n������int��Χ����3��n������
	(��3^((int)log3(MAXINT)) =  1162261467)��Լ��
	��3^19=0100 0101 0100 0110 1011 0011 1101 1011
	*/
	bool isPowerOfThree(int n) {
		if (n>0) return 1162261467 % n == 0;
		else return false;
	}
};