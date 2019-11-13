#pragma once
#include <sys/types.h>
#include <winsock.h>

class Server
{
public:
	WSADATA wsd;
	SOCKET serverSocket;
	SOCKET clientSocket;
	SOCKADDR_IN serverAddr;

	Server();
	~Server();

	void SetServerAddr();
	SOCKET ClientListen();
};

