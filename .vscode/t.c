#include <stdio.h>
#include <stdlib.h>
#include"add.h"
#include "add.c"
// int main()
// { int i = 0;
//     while (i<=100)
//     {
//         if (i%2==1)
//         { printf("%d\n",i);

        
//         }
//         i++;
//     }
//     system("pause");

//     return  0;

// } 上述为打印100内奇数
int main()
{   

    int a = 10;
    int b = 20;
    int sum = Add(a,b);
    printf("%d\n",sum);
    system("pause");
    return 0 ;

}
