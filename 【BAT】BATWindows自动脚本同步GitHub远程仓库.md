线上源码

```shell
echo on
start "C:\Windows\System32\cmd.exe"
G:
cd Git\Temp\Temp
git add .
git commit -m "From Auto Updata"
git push
pause
taskkill /f /im cmd.exe
```

- echo on：
- start "C:\Windows\System32\cmd.exe"