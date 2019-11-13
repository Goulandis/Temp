#include "pch.h"
#include "MySqlConnector.h"


MySqlConnector::MySqlConnector()
{
	con = mysql_init((MYSQL*)0);
}


MySqlConnector::~MySqlConnector()
{
	mysql_close(con);
}

bool MySqlConnector::MysqlConnect()
{
	if (con != NULL)
	{
		if (mysql_real_connect(con, dbIP, dbUser, dbPasswd, dbName, 3306, NULL, 0))
		{
			cout << con << endl;
			return true;
		}
		else
		{
			cout << "数据库连接失败" << endl;
			return false;
		}
	}
	else
	{
		cout << "数据库句柄con为空" << endl;
		return false;
	}
}

bool MySqlConnector::InsertQuery(char * query)
{
	try 
	{
		if (!mysql_select_db, dbName)
		{
			con->reconnect = 1;
			int rt = mysql_real_query(con, query, strlen(query));
			if (rt)
			{
				cout << query << endl;
				return true;
			}
			else
			{
				cout << "sql命令发送失败" << endl;
				return false;
			}
		}
		else
		{
			cout << "数据库不存在" << endl;
			return false;
		}
	}
	catch (...)
	{
		cout << "插入数据时发生异常" << endl;
	}
	return false;
}
