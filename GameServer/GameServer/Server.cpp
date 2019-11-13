#include "pch.h"
#include "Server.h"
#include <iostream>
#include <pthread.h>

using namespace std;

Server::Server()
{
	//打开2.2版本的套接字
	if (WSAStartup(MAKEWORD(2, 2), &wsd) != 0)
	{
		cout << "初始化套接字动态库错误" << endl;
		return;
	}
	if (LOBYTE(wsd.wVersion != 2 || HIBYTE(wsd.wVersion) != 2))
	{
		cout << "套接字版本错误，需要打开2.2版本的套接字" << endl;
		WSACleanup();
		return;
	}

	serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (serverSocket == INVALID_SOCKET)
	{
		cout << "套接字创建失败" << endl;
		WSACleanup();
		return;
	}

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(6688);
	serverAddr.sin_addr.S_un.S_addr = INADDR_ANY;

	int ret = bind(serverSocket, (LPSOCKADDR)&serverAddr, sizeof(SOCKADDR_IN));
	if (ret == SOCKET_ERROR)
	{
		cout << "套接字绑定失败" << endl;
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
		cout << "监听时发生错误" << endl;
		closesocket(serverSocket);
		WSACleanup();
		return;
	}
	sockaddr_in clientAddr;
	int clientAddrLen = sizeof(clientAddr);
	SOCKET clientSocket = accept(serverSocket, (sockaddr FAR*)&clientAddr, &clientAddrLen);
	if (clientSocket == INVALID_SOCKET)
	{
		cout << "接受客户端时发生错误" << endl;
		closesocket(serverSocket);
		WSACleanup();
		return;
	}
	cout << "接受到客户端" << endl;
	return clientSocket;
}
