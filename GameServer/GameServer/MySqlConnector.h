#include <iostream>
#include <mysql.h>

#pragma comment(lib,"libmysql.lib")
using namespace std;

class MySqlConnector
{
public:
	MYSQL *con;
	MYSQL_RES *res;

	char dbUser[30] = "root";
	char dbPasswd[30] = "root";
	char dbIP[30] = "127.0.0.1";
	//char dbName[30] = "testbase";
	char dbName[30] = "gamedata";

	MySqlConnector();
	~MySqlConnector();
	bool MysqlConnect();
	bool InsertQuery(char* query);
};

