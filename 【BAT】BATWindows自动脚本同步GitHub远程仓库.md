Windows自动脚本，我已自动同步GitHub仓库为例。

先上源码，可以直接用TXT写，然后将文件后缀改为.bat。

```shell
start "C:\Windows\System32\cmd.exe"
G:
cd Git\Temp
git add .
git commit -m "From Auto Updata"
git push
pause
taskkill /f /im cmd.exe
```

- start "C:\Windows\System32\cmd.exe"：打开Windows CMD控制台
- G：切换到G盘，因为我的Git仓库放在G盘
- cd Git\Temp：进入远程仓库所在的文件夹Temp，我的远程仓库放在G:/Goulandis/Git/Temp文件夹下
- `git add .`到`git push`是git同步远程仓库的命令
- pause：pause命令用于暂停命令继续执行，本例中可有可无，这里加上主要是为了方便查看执行过程
- taskkill /f /im cmd.exe：自动关闭CMD

将文件后缀改为.bat之后，再将文件放入G:Goulandis(这是我电脑的路径)，这是根据cd Git\Temp决定的，我的Git文件夹就在G:Goulandis文件夹下，所以我将脚本放在G:Goulandis文件夹下，当然若觉得麻烦，也可直接将脚本放在Temp文件下，也就是仓库的.git文件夹所在的文件夹下，这时就不需要进行盘符和文件夹切换了，即上面代码中第二第三行删除。

双击运行，测试一下执行效果：

![](【BAT】BATWindows自动脚本同步GitHub远程仓库\Snipaste_2020-01-21_16-04-19.png)

如果自动脚本很多的话，有一种更便捷的方法，就是专门为自动脚本创建一个文件夹，然后将其路径添加进环境变量中

asd