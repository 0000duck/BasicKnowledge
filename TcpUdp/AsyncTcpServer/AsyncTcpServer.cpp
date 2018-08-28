// AsyncTcpServer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <WinSock2.h>  
#include <Ws2tcpip.h>

#pragma comment(lib,"WS2_32.lib")  

using namespace std;

const int PORT = 8888;
#define WM_SOCKET WM_USER+0x10    //�Զ���socket��Ϣ

int main()
{
	WSADATA wsaData;
	//ָ���汾��  
	WORD wVersion = MAKEWORD(2, 2);
	//����winsock��dll  
	if (WSAStartup(wVersion, &wsaData) != 0)
	{
		//��ʧ�ܡ�
	}
	//�жϰ汾�Ƿ�Ϊ2.2
	if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2)
	{
		WSACleanup();//�������⣬ж��֧�֣�����������
		return 0;
	}

	//�����׽��ֻ���TCP
	SOCKET s = ::WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP,NULL,0,0);
	if (s == INVALID_SOCKET)
	{
		printf("error");
		::WSACleanup();//�����ͷ���Դ  
		return 0;
	}
	
	sockaddr_in sin;
	sin.sin_family = AF_INET;
	//�˿ں�8888
	sin.sin_port = htons(PORT);
	//INADDR_ANY����ָ����ַΪ0.0.0.0�ĵ�ַ,  
	//��ַȫ��0��Ҳ�������еĵ�ַ
	sin.sin_addr.S_un.S_addr = INADDR_ANY;

	//��socket  
	if (::bind(s, (LPSOCKADDR)&sin, sizeof(sin)) == SOCKET_ERROR)
	{
		printf("error");
		::WSACleanup();//�����ͷ���Դ  
		return 0;
	}

	//-------------------------
	// Create new event
	NewEvent = WSACreateEvent();

	//-------------------------
	// Associate event types FD_ACCEPT and FD_CLOSE
	// with the listening socket and NewEvent
	WSAEventSelect(s, NewEvent, FD_ACCEPT | FD_CLOSE);

	//����socket
	/**
	int listen(SOCKET s, int users);
	���������Ե���listen����ʹ�����׽���s���ڼ���״̬�����ڼ���״̬�����׽���s��ά
	��һ���ͻ�����������У��ö����������users���ͻ��������󡣼���ú���ִ�гɹ���
	�򷵻�0�����ִ��ʧ�ܣ��򷵻�SOCKET_ERROR��
	*/
	if (::listen(s, 2) == SOCKET_ERROR)
	{
		printf("error");
		::WSACleanup();//�ͷ���Դ  
		return 0;
	}
	else
	{
		printf("Listening on socket...\n");
	}

	sockaddr_in remoteAddr;
	int nAddrLen = sizeof(remoteAddr);
	SOCKET client;
	char szText[] = "peter\n";//����������  

	while (1)
	{
		/*
		accept��������ʹ�ã����ú�����������״̬���ȴ��û����ӣ�
		���û�пͻ��˽������ӣ������������ط������ῴ�����档
		����пͻ������ӣ���ô�����ִ��һ��Ȼ�����ѭ��������ȴ���
		*/
		client = ::accept(s, (SOCKADDR*)&remoteAddr, &nAddrLen);
		if (client == INVALID_SOCKET)
		{
			printf("error");
			continue;
		}

		char str[INET_ADDRSTRLEN];
		printf("���ܵ�һ�����ӣ�%s\r\n", inet_ntop(AF_INET, &remoteAddr.sin_addr, str, sizeof(str)));

		::send(client, szText, strlen(szText), 0); //��������
	}
	::closesocket(client);//�ر��׽���  
	::closesocket(s);
	::WSACleanup();

    return 0;
}
