#ifndef _HUAWEI_H_
#define _HUAWEI_H_

#pragma region ��̬�滮

/*
��������������
https://blog.csdn.net/joylnwang/article/details/6766317
*/

/*
C++ ��Ϊ �ϳ���
https://blog.csdn.net/bingo_12345/article/details/48324535

@˼·
1.��ÿһ����ԱΪ��ֵ������ÿ����Ա������������ϳ��Ӷ���������
���յõ�������к�Ԫ�ء����㸴�Ӷ�O(N^3)��

2.�Գ�Ա��������������һ�Σ����ö�̬�滮˼�룬���Ԫ�ض�������
���е�����������еĺ͡����㸴�Ӷ�O(NlogN)+O(N^2) = O(N^2)��

3.���ö�̬�滮��˼�룬�������������������к���ݼ������У�

4.����ÿһ��Ԫ��Ϊ��ֵ������ǰ��������Ž�ͺ���ݼ����Ž⣬�õ�
��������Ž⣻
*/
void test_HeChangDui();

#pragma endregion

#pragma region ����

/*
�����ֵܵ���
https://www.nowcoder.com/practice/03ba8aeeef73400ca7a37a5f3370fe68?tpId=37&tqId=21250&tPage=2&rp=&ru=%2Fta%2Fhuawei&qru=%2Fta%2Fhuawei%2Fquestion-ranking
*/
int test_cha_zhao_xiong_di_dan_ci();
int test_su_shu_ban_lv();

/*
����
https://www.nowcoder.com/practice/78a1a4ebe8a34c93aac006c44f6bf8a1?tpId=37&tqId=21267&rp=0&ru=/ta/huawei&qru=/ta/huawei/question-ranking
*/
int test_sudoku();

#pragma endregion

#pragma region ͼ

//·���滮����
int test_mi_gong_wen_ti();

#pragma endregion


#endif // !_HUAWEI_H_
