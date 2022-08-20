 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "game.h"
#include "game.c"
 void menu()
 {
    printf("**********************\n");
    printf("** 1.play    0.exiit**\n");
    printf("**********************\n");   
 }

//游戏的整个算法实现
void game ()
{   char ret = 0;
    //数组
    char board[ROW][COL]={0};   
    //初始化
    InitBoard(board,ROW,COL);
    //画出棋盘
    DisplayBoard(board,ROW,COL);
    //玩家下棋
    while(1)
    {   
        playermove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ret = iswin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        computermove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ret = iswin(board,ROW,COL);
        if(ret != 'c')
        {
            break;
        }
        
    }
    if (ret=='*')
    {
        printf("玩家赢了\n");
    }
    else if(ret =='#')
    {
        printf("电脑赢了\n");
    }
    else
    {
        printf("平局\n");
    }
        
}









 void test()
 {  
    srand((unsigned int ) time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input)                                                           //先打印   |   |     换行  第一行
        {                                                                       //再打印---|---|---        第一行
                                                                                //循环     |   |   第二行
                                                                                //循环  ---|---|---第二行
                                                                                //循环     |   |   第三行
            case 1:
                printf ("三子棋\n");
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf ("输入错误");
                break;

        }
    } while (input);//0是假所以结束，其他恒真所以继续
    
 }

 int main()
 {  
    test ();
    system("pause");
    return 0 ;
 }