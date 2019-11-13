# 一、配置mysql.h

C++有多种方式连接Mysql，这里我使用Mysql自带的C++库Mysql.h来连接Mysql与C++程序。

在C++连接Mysql时必须要使用头文件`#include "mysql.h"`和`#pragma comment(lib,"libmysql.lib")`，但是我们在`#include "mysql.h"`时经常会出现头文件无法打开的情况，这是因为VS找不到mysql相关文件的路径，我们只需按如下步骤操作即可

![](G:/Goulandis/Git/Temp/Temp/【UE4】C++连接MySQL/Snipaste_2019-10-23_10-36-25.png)

但是这么配置只能对当前项目有效，新建项目又需要重新配置，一劳永逸的方法目前还没有研究出来😂。

大多数时候，在我们按上面的方法配置完之后，VS可能依旧无法打开`mysql.h`，这时我们需要将程序的编译平台都改成x64平台，包括工程属性和编译器工具栏上的编译平台。

![](G:\Goulandis\Git\Temp\Temp\【C++】C++连接MySQL\Snipaste_2019-11-12_15-12-53.png)

做到这里代码上应该就不会再报红了，但是我们编译可能依旧通不过，因为程序无法打开libmysql.lib，这时我们需要将C:\Program Files\MySQL\MySQL Server 8.0\lib下的libmysql.dll文件分别拷贝一份到C:\Windows\System32和项目目录/x64/Debug（即exe文件所在目录）。

这样，我们的整个连接环境就配置好了。

# 二、连接MySQL

首先我们来看一份完整的MySQL连接与查询sql并获取查询结果的C++程序：

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
	else MessageBoxA(NULL, "数据库连接失败", "", NULL);
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
	else cout <<"ERROR:"<< res << endl;
	mysql_free_result(res);
	mysql_close(con);
	return 0;
}
```

需要注意的是，在连接Mysql之前是需要获取并初始化Mysql连接的，在Mysql库中它是MYSQL类型，通过<font color=red>mysql_init((MYSQL*)0)</font>来获取并初始化Mysql连接。

然后再使用<font color=red>`mysql_real_connect(MYSQL *mysql,const char *host,const char *user,const char *passwd,const char *db,unsigned int port,const char *unix_socket,unsigned long clientflag)`</font>函数来连接Mysql，函数返回`MYSQL*`类型，`MYSQL*`可以直接使用if来判断连接的成功与否，连接成功则返回一个`MYSQL*`的连接句柄，失败则返回NULL、。

- *mysql:Mysql连接；
- *host:Mysql所在IP地址；
- *user:Mysql的登录用户名；
- *passwd:Mysql用户登录密码；
- *db:所需要连接的数据库的库名；
- port:Mysql所用占用的port默认为3306；
- *unix_socket:一般为NULL就可以了；
- clientflag:一般为0即可。

需要注意的是在连接Mysql之前应该先判断以下Mysql连接是否正常，即<font color=red>con != NULL</font>，以保证代码的健壮性。

# 三、向MySQL发送sql命令

当Mysql连接成功后，就可以使用<font color=red>`mysql_real_query(MYSQL *mysql,const char *query,unsigned long length)`</font>函数来向Mysql发送sql命令。`*query`是需要发送的sql命令字符串，只能是`char*`，不能使用string，length是所需发送命令的字长。命令发送成功返回0，失败返回非0

为了保证sql命令的发送不易出错，保证代码最够健壮，在发送sql命令之前，我们最好先使用<font color=red> mysql_select_db(MYSQL *mysql,const char *db)</font>函数判断以下操作的数据库是否存在，如果数据库存在则返回0，不存在则返回1，

具体的MySQL的C++的API可以在 https://dev.mysql.com/doc/ 查询。

然后还需要设置<font color=red> con->reconnect = 1;</font>表示Mysql连接自动重连，即当Mysql连接因为各种原因断开时，C++程序可以自动进行重新连接，以保证发送sql命令时Mysql连接是正常的。

# 四、抓取查询数据

如果我们发送的命令是一个查询命令，那么Mysql的查询结果会保存在Mysql连接中的一个预定义数据结构中，我们使用<font color=red> mysql_store_result(MYSQL *mysql)</font>函数即可从该数据结构中抓取出MYSQL_RES类型的数据表，然后使用<font color=red> mysql_fetch_row(MYSQL_RES *res)</font>获取数据表中的MYSQL_ROW类型的一行数据，MYSQL_ROW是一个数组，数组中每一个元素就是一行中某一列的值，可以使用<font color=red>mysql_num_fields(MYSQL_ROW *row)</font>函数获取row中的列数来遍历MYSQL_ROW数组。

需要注意的是，在读取具体数据之前我们应该要先判断抓取出来的数据表是否有内容，可以通过<font color=red> mysql_error()、mysql_errno()和mysql_field_count()</font>等函数进行判断。

至此，我就将Mysql数据表中的数据抓取出来了。

# 五、释放连接

当所有的sql操作完毕后，我们需要手动释放这些操作所占用的资源，我们需要先使用<font color=red> mysql_free_result(MYSQL_RES *res)</font>释放数据表，再使用<font color=red> mysql_close(MYSQL *mysql)</font>释放Mysql连接。

至此整个MySQL操作流程完毕。



