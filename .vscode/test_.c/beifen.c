#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>
//char arr[]字符串 int arr []数组 int 自然数  unsigned int 整数可以负数
// int main()
// {   int i = 0;
//     scanf("%d",&i);
//     if (i%2==1)
//     {printf("该数为奇数\n");
        
//     }
//     else
//     printf("该数为偶数\n");  
    
      
    
    
//     system("pause");
//     return 0;

// }上述为确认一个数是否为奇数
//continue是跳过循环内位于continue后的语句，进入下一循环。而break是直接跳出循环，后面的语句也同样不运行
//while循环中的continue可能跳过调整语句，导致死循环。而for循环不会
//while()括号内其实是限制条件如果不满足就会跳出循环
//for循环取值建议使用前闭后开的模式，for循环的初始化，判断，调整都可以省略，但是判断部分被省略的话会出现死循环。
//记住=是赋值，==才是等于，才是判断。
//do while先循环再判断，即至少循环一次。
// int main()
// {   int n = 0;
//     int i = 0;
//     int re = 1;
//     int sum = 0;
//     int s = 0;
//    scanf("%d",&s);
// for (n=1;n<=s;n++)
// {    re = 1;
//    for (i=1;i<=n;i++)//这部分是算n的阶乘的，让n++则得到sum
//     {
//         re= i*re;

//     }
//     sum = sum + re; //此处有错误re继承了前面的值，如输入三 本来的结果是1！+2！+3！=9，实际却是1！+2！+2*2*3=15，即第三次循环的re继承了前面循环由1变成2
// //该进的方法就是把re=1放到for循环前
// }
//     printf ("结果等于%d\n",sum);

   
//     system("pause");
//     return 0;
// }





// //算阶乘之和 s结果等于1！+2!+3!.....+s!
// int main()
// {   int mid =0;
//     int k = 7;
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int left = 0;左下标
//     int sz =sizeof(arr)/sizeof(arr[0]);//计算个数
//     int right = sz-1;右下标减一是因为数组没有\0,字符串则有\0即应减2.或用strlen(arr1)-1   strlen不包含\0

//     while(left<=right)进入循环的条件
//     {
//         int mid =(right+left)/2;每次都用新的r和l来重新赋值mid
//      if (arr[mid]<k)mid是个下标，arr[mid]才是要找的数字
//     {   
//         left = mid +1;      
//     }
//         else if (arr[mid]>k)
//         {
//             right = mid +1;
//         }
//         else
//         {
//             printf ("概述已被找到，下标为；%d\n",mid);
//             break ;

//         }
//     }
    

    
   
    
//     system ("pause");
//     return 0;
// }

//define是预处理指令不是关键字
//指针是个变量用来存放地址 ，大小可以是4（321）也可以是8（64）  
//switch语句中case与default没有顺序可言。没有break的话回直接向下逐条运行语句
// int main()//求最大公约数，辗转相除法
// {   int x = 0;
//     int y = 0;
//     int z = 0 ;
//     scanf ("%d%d",&x,&y);
//     while (x%y)                  前提是x>y
//     {  z = x%y;                  通过变换赋值实现辗转相除
//         x = y;                   &&代表且是交集  ||代表或是并集  
//         y=z; 

//     }
//     printf ("最大公约数：%d\n",y);
//    system("pause");
//     return 0;




// }
// int main ()//                    求素数;整体思路就是用for循环列举,用第二个for循环检查是否满足不被任何数(小于此数)整除
// {   int i = 0;                    如果可以整除就跳出为合数,若是因为列举结束跳出就是素数
//     for (i=100;i<=200;i++)
//     {
//         int j = 0;
//         for (j = 2;j<i;j++)
//         {
//             if (i%j==0)
//             { break;
           

//             }
//         }
//         if (i==j)
//         {
//             printf ("%d ",i);
//         }
//     }
    
    
    
    
    
    
//     system("pause");
//     return 0 ;

// }
//可以优化为；  for(j=2;j<=squart(i);j+=2)                                             i=a+b,a或b中必有一个<=i的平方根,偶数不可能是素数
//在屏幕上输出乘法口诀表(该部分自己完成)

// int main()
// {   int i = 0;
//     int j = 0;
//     int n = 0;
//     for(i=1;i<10;i++)
//     {   
//         int j = 1;
//         for (j = 1; j<=i;j++)
//     {  n=i*j;
//         printf("%d*%d = %2d  ",i,j,n);//%2d代表你要打印俩位数，这样表格可以对齐
//     }
 
     
//     printf("\n");

//     }




//     system("pause");
//     return 0 ;



// }
//猜数字游戏.用时间戳做随机值的生成起始点 
//初步应用了函数 .
// void game()
// {
//    int ret= 0;
//    int n = 0;

    
//     ret = rand ()%100+1;//生成1--100的随机数
//     //printf ("%d\n",ret);
//     while (1)
//     {   
//         printf("请猜数字");
//         scanf("%d",&n);
//         if (n>ret)
//         {printf("太大了\n");
//             /* code */
//         }
//         else if (n<ret)
//         {printf("太小了\n");
//         }
//         else 
//         {
//             printf ("你猜对了\n");
//             break;
//         }
            
//         }
        
        
        
//     }

   


// void menu ()
// {
//     printf("********************\n");
//     printf("*****1.play   0.exit     *****\n");
//     printf("********************\n");}
      
// int main()
//     { int input = 0;
//     srand((unsigned int)time(NULL));//利用时间戳得随机数//unsignde int 是无符号整型可以是负数
//       do
//       {menu();
//        printf ("请选择:");
//        scanf("%d",&input);
//        switch (input)
//        {
//        case 1:
//        game ();

//        break;

//        case 0 : 
//        printf("退出游戏\n");

//         break;
       
//        default:
//        printf("输入错误");
//         break;
//        }



        
//       } while (input);
      



//      system("pause");
//         return 0 ;
//     }





//goto again     again    会跳过中间的语句。容易出现bug
//关机程序无法运行的原因是win11的cmd有所不同
// int main()
// {
//     char input [20]= {0};
//     system("shutdown -s -t 60");//shutdown -s -t 60有空格
// again:    printf("你的电脑将在一分钟内关机，请输入 我是猪 来取消关机\n");
//     scanf("%s",input);

//     if (strcmp(input,"我是猪")==0) //strcmp比较俩个字符串的 strcmp("x","y")==0即俩个字符串一样
//     {
//         system("shutdown/a");
//     }
//     else
//     {
//         goto again;
//     }



//     system ("pause");
//     return 0;
// }
//                                                        函数（子程序）学习  
//chart*是一种指针类型，destination是地址。const chart * ，source是源头。null character是/0.chart对应%s打印遇到/0结束后面不打印
//value是值的意思
//int*pa=&a. *pa是地址里的值






// //交换函数
// void swap1(int* px,int* py)//      这里面的int*pa是形式参数 只在被调用的时候分配内存单元
// {                                  但是形参和实参分别占有不同的内存块
//     int tem = 0;                    我写的是传址调用。还有传值调用
//     tem = *px;
//     *px = *py;
//     *py = tem;
// }

// int main()
// {   int a = 10;                     a&和&b才是实际参数。因为交换地址所以用的是指针变量
//     int b = 20;                      *p++是地址自增。（*p)++才是值自增
//     swap1(&a,&b);
//     printf("a=%d,b=%d\n",a,b);

//     system("pause");

//   return 0;
// }
//求素数函数版
// int is_prime(int n)
// {   int j = 0;
//     for (j=2;j<n;j++)
//     {
//         if (n%j==0)
//         break;
        
//     }
//     if (j==n)
//     return 1;
//     else
//     {
//         return 0;
//     }
// }


// int main ()
// {   
//     int i = 0;
//     for(i=100;i<=200;i++)
//     {
//         if (is_prime(i)==1)
//         {   
//             printf ("%d ",i);
//             /* code */
//         }   
       
//     }
//     system("pause");
//     return 0 ;
// }
//                                                 链式访问：把一个函数的返回值作为另一个函数的参数
//                                                    printf返回值是打印的个数
//                                 函数递归
//               栈区：局部参数，形参，函数 堆区； 动态开辟的内存   静态区：全局变量 static修饰的变量
//  stack overflow 栈溢出问题。所以递归要有限制语句防止栈溢出
// void print (int n)
// {
//     if(n>9)                 //递归一定要等最里面的函数运行完才运行下一个，如只有1是不满足n>9进行到打印这一步，完整进行了函数运算所以先打印1，
//                             //然后12%10，然后123%10，然后1234%10.就实现了打印 1 2 3 4的目的 若要4 3 2 1的话就循环%10再/10
//     {                            
//         print(n/10);
//     }
//     printf(" %d\n",n%10);
// }
// int main ()
// {   


//     unsigned int num = 0;
//     scanf("%d",&num);//1234
//     //递归
//     print(num);

//     system("pause");
//     return 0 ;
// }
//求字符串长度1不用递归
// int my_strlen(char*str)
// {   int count = 0;
//     while(*str !='\0')
//     {  
//         count++;
//         str++;
//     }
//     return count;
// }

// int main ()
// {   

//     char arr []="bit";
//     int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//     printf("%d\n",len);
//     system("pause");
//     return 0 ;
// }
//求字符串长度：不能创建临时变量
// 
// int my_strlen(char*str)//                          思路1+“it”——————1+1+“t”----1+1+1“\0”=3
// {   if(*str!='\0')                                  str是指针变量即地址   *str才是bit的某一个字符
// {                                                    arr本身相当于一个地址但传参时传过去的是第一个元素的地址
//     return 1+my_strlen(1+str);   
// }
    
// }


// int main()
// {   char arr[]="bit";
//     int len =my_strlen(arr);
//     printf("len = %d\n",len);
    
    
    
//     system("pause");
//     return 0;
// }
// int fac(int n)//                          递归求阶乘
// {
//     if(n<=1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fac(n-1);
//     }
// }

// int main()
// {   int n = 0;
//     int ret = 0;
//     scanf("%d",&n);
//     ret=fac(n);
//     printf("%d\n",ret);
    
//     system("pause");
//     return 0 ;
// }
//                       斐波拉契数列
// int Fib(int n)   但该种放法效率低要算2^n次，有太多重复
// {
//     if(n<=2)
//     return 1;
//     else
//     {
//         return Fib(n-1)+Fib(n-2);
//     }
// }
//优化
// int Fib(int n)
// {
//     int a = 1;
//     int b = 1;
//     int c = 0;
//     while (n>2)
//     {
//        c=a+b;
//        a=b;
//        b=c;
//        n--;
//     }
//     return c;//太快了，这也说明不是所有难度高的算法都有高收益


    
// }
// int main()
// {   
//     int n = 0;
//     int ret = 0;
//     scanf ("%d",&n);
//     ret = Fib(n);
//     printf ("ret=%d\n",ret);    
//     system("pause");
//     return 0 ;
// }


// int c =0;                                                    汉诺塔问题源码。可惜不知道什么原因无法运
// void move(char x,int n,char z)                               三的答案是AC  AB  CB AC  BA  BC  AC
// {
//     printf("第%d步:将%d号盘从%c移到%c\n",c++,n,x,z);
// }

// void hanoi(int n,char x,char y,char z)
// {  
//     if(n==1)
//     {
//         move(x,1,z);第一步
//     }
//     else
//     {
//         hanoi(n-1,x,z,y);//yz交换位置了所以第一步的结果也不一样
//         move(x,n,z);
//         hanoi(n-1,y,x,z);

//     }
// }
// void main()
// {   
//     int n =0;
//     while (printf("三个塌座为a,b,c。圆盘最初在a座,借助b座移到c座。请输入圆盘数:")!=EOF)
//     {
//        scanf("%d,&n");
//        hanoi(n,'a','b','c');
//     }
    
//     system("pause");
  
//}







//                              p12      数组
//定义：是一组相同类型元素的集合。
//int char arr[10] 存放10个整型
//[]里面应为常量表达式
//数组的初始化：int arr[10]={1,2,3};不完全初始化剩下默认为零；char arr1 [5]={'a','b'}；char arr2[5]="ab".其实还有\0.\
//若输入char arr[5]={'a',98};会输出a b因为b的A码值为98
//sizeof有计算\0,大小是字节。而strlen只针对字符串且不计算\0，但要有\0，若没有则为随机数。如：
//strlen （arr1）答案是随机数，strlen （arr2）答案是3
//arr 指的是数组，arr[%d]这是数组里面的元素。%d是下标。          %c—>arr[3]
// 一维数组：数组在内存中是连续存放的；
// int main()
// {
//     int arr[]={1,2,3.4,5,6,7,8,9,10};
//     int i = 0;
//     int sz =sizeof(arr)/sizeof(arr[0]); //0,4,8,c（地址是16进制0，1，2，3，4，5，6，7，8，9，a,b,c,d,f）,所以地址要加4才是下一元素
//     for(i=0;i<sz;i++)
//     {
//         printf ("%p\n",&arr[i]);
//     }
//     system("pause"); 
//     return 0;

// }




//数组作为函数参数，传出的是首元素地址即数组名。如printf("%p\n",arr);结果是与printf("%p\n",&arr[0]);是一样的
//例外：sizeof(数组名)，此时数组名表示整个数组。计算的也是整个数组，单位是字节
//&数组名取出的是整个数组





// void bubble_sort(int arr[],int sz)
// {
//     int i = 0;
//     for (i = 0; i < sz-1; i++)
//     {  
//        //int sz=sizeof (arr)/sizeof(arr[0]);//该处由于数组传参传的是首元素地址所以计算出现错误；应提前算好
//        int j = 0;
//        int f = 1;优化语句
//        for(j=0;j<sz-1-i;j++)
//        {
//         if(arr[j]<arr[j+1])
//         {
//             int tmp = 0;
//             tmp = arr[j];
//             arr [j]=arr[j+1];
//             arr[j+1]=tmp;
//             f = 0;// 优化语句
//         }
//        }
//        if(f = 1);优化语句
//        break;优化语句
//     }
    
// }
// int main()
// {   int i = 0;
//     int arr[]={9,8,7,6,5,4,3,2,1,0};//对arr进行排序，排成升序
//     int sz=sizeof (arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     for(i = 0;i<sz;i++)
//     printf("%d ",arr[i]);
   
    
//     system("Pause");
//     return 0 ;
// }