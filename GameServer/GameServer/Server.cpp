#include "pch.h"
#include "Server.h"
#include <iostream>
#include <pthread.h>

using namespace std;

Server::Server()
{
	//��2.2�汾���׽���
	if (WSAStartup(MAKEWORD(2, 2), &wsd) != 0)
	{
		cout << "��ʼ���׽��ֶ�̬�����" << endl;
		return;
	}
	if (LOBYTE(wsd.wVersion != 2 || HIBYTE(wsd.wVersion) != 2))
	{
		cout << "�׽��ְ汾������Ҫ��2.2�汾���׽���" << endl;
		WSACleanup();
		return;
	}

	serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (serverSocket == INVALID_SOCKET)
	{
		cout << "�׽��ִ���ʧ��" << endl;
		WSACleanup();
		return;
	}

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(6688);
	serverAddr.sin_addr.S_un.S_addr = INADDR_ANY;

	int ret = bind(serverSocket, (LPSOCKADDR)&serverAddr, sizeof(SOCKADDR_IN));
	if (ret == SOCKET_ERROR)
	{
		cout << "�׽��ְ�ʧ��" << endl;
		closesocket(serverSocket);
		WSACleanup();
		return;
	}
}


Server::~Server()
{
	WSACleanup();
}

SOCKET Server::ClientListen()
{
	int ret = listen(serverSocket, SOMAXCONN);
	if (ret == SOCKET_ERROR)
	{
		cout << "����ʱ��������" << endl;
		closesocket(serverSocket);
		WSACleanup();
		return;
	}
	sockaddr_in clientAddr;
	int clientAddrLen = sizeof(clientAddr);
	SOCKET clientSocket = accept(serverSocket, (sockaddr FAR*)&clientAddr, &clientAddrLen);
	if (clientSocket == INVALID_SOCKET)
	{
		cout << "���ܿͻ���ʱ��������" << endl;
		closesocket(serverSocket);
		WSACleanup();
		return;
	}
	cout << "���ܵ��ͻ���" << endl;
	return clientSocket;
}
