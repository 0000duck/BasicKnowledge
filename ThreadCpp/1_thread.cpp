#include "stdafx.h"
#include "ThreadLearning.h"

void print_hello()
{
	cout << "hello world" << endl;
}

void print(string str)
{
	cout << str << endl;
}

void hello_world()
{
	string tmp;

	//���ǲ��������ĵ���
	//�����̶߳���t1,���̺߳���Ϊhello
	thread t1(print_hello);
	//���t1���߳�ID
	std::cout << "ID:" << t1.get_id() << std::endl;
	//�ȴ�t1�̺߳���ִ�н���
	//join�������������߳�,ֱ���̺߳���ִ�н���,����̺߳����з���ֵ,����ֵ��������.
	t1.join();

	//�������ĵ���
	//�����̶߳���ta,���̺߳���Ϊprint
	tmp = "A";
	thread ta(print, tmp);
	ta.join();
	tmp = "B";
	thread tb(print, tmp);
	tb.join();
	tmp = "C";
	thread tc(print, tmp);
	tc.join();
}