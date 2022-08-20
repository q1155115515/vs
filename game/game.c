 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "game.h"
//函数功能实现
void InitBoard(char board[ROW][COL],int row,int col)//初始化棋盘
{
    int i = 0;
    for(i = 0;i<ROW;i++)
    {   int j= 0;
        for(j=0;j<COL;j++)
        {
            board[i][j]=' ';
        }
    }
}
void DisplayBoard(char board[ROW][COL],int row,int col)
 {     //第一个优缺点，只能打印3列
//     int i = 0;
//     for (i=0;i<row;i++)
//     {
//         printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//         if (i<row-1)
//         {
//             printf ("---|---|---\n");
//         }
        
//     }
//改进
        int i = 0;//                                                            //先打印   |   |     换行  第一行
                                                                                //再打印---|---|---        第一行
                                                                                //循环     |   |   第二行
                                                                                //循环  ---|---|---第二行
                                                                                //循环     |   |   第三行
        for(i=0;i<row;i++)
        {
            int j = 0;
            for(j=0;j<col;j++)
            {
                printf(" %c ",board[i][j]);
                if(j<col-1)
                printf("|");
            }
            printf("\n");
            if (i<row-1)
            {
                for(j=0;j<col;j++)
                {
                    printf("---");
                    if(j<col-1)
                    printf("|");
                }
                printf("\n");
            }
            
        }


    }
void playermove(char board[ROW][COL],int row,int col)
{
    int x = 0;
    int y = 0;
    printf("玩家走:>\n");
   
    //判断坐标的合理性
    while(1)
    {   printf("请输入坐标:>");
        scanf("%d %d", &x, &y);                       //每输入一步都要判断
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(board[x-1][y-1]== ' ')
            {
                board[x-1][y-1]='*'; 
                break;              
            }
            else
            {
                printf("该坐标已被占用\n");
                
            }
        }
        else
        {
        printf("坐标错误，请重新输入\n");   
        
        }
    }
}   

void computermove(char board[ROW][COL],int row,int col)
{   int x= 0;
    int y = 0;
    printf("电脑走:>\n");
    while (1)
    {
        x = rand()% row;
        y = rand()% col;
        if(board[x][y]== ' ')
                {
                    board[x][y]='#'; 
                    break;              
                }
             
         }

}
static int isfull (char board[ROW][COL],int row,int col)            //判断是否9个格子是否已经填满。若填满还未触发胜利条件，则1为平局。
{
    int i = 0;
   
    for(i=0;i<row;i++)
    {    int j = 0;  
        for(j=0;j<col;j++)
        {
            if(board[i][j]==' ')
            {
                return 0;
                break;
            }
        }
    }
    return 1;
}

char iswin(char board[ROW][COL],int row,int col)                          //判断胜利条件。
{
    int i =0;
    for(i = 0;i<row;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]&&board[i][2]!=' ')//依次检查是否有那行的元素都一样
        {
            return board[i][1];
        }

    }
    for(i = 0;i<col;i++)
    {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i]&&board[1][i]!=' ')//依次检查是否有哪列的元素是一样的。
        {
            return board[1][i];
        }
        
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')//俩条斜线
    {
        return board[1][1];
    }
    if(board[2][0]==board[1][1] && board[1][1]==board[0][2]&&board[1][1]!=' ')
    {
        return board[1][1];
    }
    if(isfull(board,ROW,COL)==1)
    {
        return 'Q';
    }
    return 'c';
}
    