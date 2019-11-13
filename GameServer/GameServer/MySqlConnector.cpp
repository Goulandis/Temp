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
			cout << "���ݿ�����ʧ��" << endl;
			return false;
		}
	}
	else
	{
		cout << "���ݿ���conΪ��" << endl;
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
				cout << "sql�����ʧ��" << endl;
				return false;
			}
		}
		else
		{
			cout << "���ݿⲻ����" << endl;
			return false;
		}
	}
	catch (...)
	{
		cout << "��������ʱ�����쳣" << endl;
	}
	return false;
}
