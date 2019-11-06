```C++
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

# 二、配置mysql.h

在C++连接Mysql时必须要使用头文件`mysql.h`的，但是我们在`#include "mysql.h"`时经常会出现头文件无法打开的情况，这是因为VS找不到mysql相关文件的路径，我们只需按如下步骤操作即可

![](G:/Goulandis/Git/Temp/Temp/【UE4】C++连接MySQL/Snipaste_2019-10-23_10-36-25.png)

但是这么配置只能对当前项目有效，新建项目又需要重新配置，一劳永逸的方法目前还没有研究出来😂。

# 