#include <stdio.h>
#include <stdlib.h>
int main()
{   int sum = 0;
    int num1 = 0;
    int num2 = 0;
    scanf("%d%d", &num1,&num2);
    sum = num1 +num2;
    printf("sum = %d\n",sum);
    printf("Hello World!\n");
    printf("你好世界！\n");
    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}