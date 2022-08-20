 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "game2.h"

void InitBoard (char board [ROWS][COLS],int rows,int cols,char set)//初始化棋盘
{
    int i = 0;
    for(i = 0;i<rows;i++)
    {   int j= 0;
        for(j=0;j<cols;j++)
        {
            board[i][j]= set;
        }
    }
}
void DisplayBoard(char board[ROWS][COLS],int rows,int cols)
{
    int i =0;
    int j =0;
    //打印列号
     for(i=0;i<=cols;i++)
     {
        printf("%d ",i ); 
     }
     printf("\n");
    for(i=1;i<=rows;i++)
    {   printf("%d ",i);
        for(j=1;j<=cols;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}
void SetMine(char board[ROWS][COLS],int rows,int cols)
{
    int count = EASY_COUNT;
    while(count)
    {//'1'-'0'=1
        int x =rand()%rows+1;
        int y  =rand()%cols+1;
        if (board[x][y]=='0')
        {
           board[x][y]='1';
           count-- ;
        }
        
    }
}
int Num(char mine[ROWS][COLS],int x,int y)
{   
    return mine[x-1][y]+
    mine[x-1][y-1]+
    mine[x][y-1]+
    mine[x+1][y-1]+
    mine[x+1][y]+
    mine[x+1][y+1]+
    mine[x][y+1]+
    mine [x-1][y+1]-8*'0';//其实不好

    
}

void FindMine(char mine[ROWS][COLS],char show [ROWS][COLS],int rows,int cols)
{
    int x = 0;
    int y = 0;
    int win = 0; 
    while(win<COL*ROW-EASY_COUNT)
    {
        printf("请输入排雷的坐标:>\n");
        scanf("%d%d",&x,&y);
        if(x>=1 && x<=rows && y>= 1 && y<=cols)
        {   
            if(mine[x][y]=='1')//是雷
            {
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine,rows,cols);
                break;
            }
            
            else//不是雷
            {
                int count = Num(mine,x,y);
                show[x][y]='0'+count;
                DisplayBoard(show,rows,cols);
                win++;
            }
        

        }
        else
        {
            printf("输入坐标错误，请重新输入\n");
        }
    }
    if(win==COL*ROW-EASY_COUNT)
    {
        printf("排雷成功\n");
        DisplayBoard(mine,rows,cols);
    }
}