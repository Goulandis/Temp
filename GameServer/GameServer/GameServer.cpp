#include "pch.h"
#include <iostream>
#include "MysqlConnector.h"

int main()
{
	MySqlConnector *connector = new MySqlConnector();
	if (connector->MysqlConnect())
	{
		//char* query = const_cast<char*>("insert into surface_number (surface_no,surface_name) values (1,\"su_00\")");
		char* query = const_cast<char*>("insert into userinfo (username,passwd,email) values (\"has00\",\"sad\",\"su_00@game\")");
		if (connector->InsertQuery(query))
		{
			//todo
			cout << query << endl;
		}
			
	}
	return 0;
}
