```
#include "pch.h"
#include <iostream>
#include <mysql.h>

#pragma comment(lib,"libmysql.lib")

using namespace std;

int main()
{
	MYSQL *con;
	MYSQL_RES *res;
	MYSQL_ROW row;

char dbuser[30] = "root";
char dbpasswd[30] = "root";
char dbip[30] = "127.0.0.1";
char dbname[30] = "testbase";
char tablename[30] = "surface_data";

char *query = NULL;

int rt;

con = mysql_init((MYSQL*)0);

if (con != NULL && mysql_real_connect(con, dbip, dbuser, dbpasswd, dbname, 3306, NULL, 0))
{
	if (!mysql_select_db(con, dbname))
	{
		con->reconnect = 1;
		query = const_cast<char*>("call SelectSurfaceDataByName('su_033','0000-00-00 00:00:00',null,@out_state)");
		rt = mysql_real_query(con, query, strlen(query));
		if (rt) cout << "Error:" << mysql_error(con) << endl;
		else cout << "Query Succeed:" << query << endl;

}

}
else
	MessageBoxA(NULL, "数据库连接失败", "", NULL);
res = mysql_store_result(con);
if (mysql_field_count(con) != NULL)
{
	while (row = mysql_fetch_row(res))
	{
		for (int i = 0; i < mysql_num_fields(res); i++)
			cout << row[i];
		cout << endl;
	}
}
else
	cout <<"ERROR:"<< res << endl;

mysql_free_result(res);
mysql_close(con);
return 0;

}
```

