#include "stdafx.h"
#include "ThreadLearning.h"

void thread_move()
{
	std::thread t(func, 2, 3, 4);
	//�ƶ���,�̶߳���t���ڴ����κ��߳�
	std::thread t1(std::move(t));
	//t.join();
	t1.join();
}