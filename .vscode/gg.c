#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>
int main()
{
    char input [20]= {0};
    system("shutdown -s -t 60");//shutdown -s -t 60有空格
again:    printf("你的电脑将在一分钟内关机，请输入 我是猪 来取消关机\n");   
    scanf("%s",input);

    if (strcmp(input,"我是猪")==0) //strcmp比较俩个字符串的 strcmp("x","y")==0即俩个字符串一样
    {
        system("shutdown/a");
    }
    else
    {
        goto again;
    }



    system ("pause");
    return 0;
}