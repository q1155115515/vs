 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include "game2.h"
#include "game2.c"
void menu()
 {
    printf("**********************\n");
    printf("** 1.play    0.exiit**\n");
    printf("**********************\n");   
 }
 void game()
 {
    printf("扫雷\n");
    //布置雷的信息
    char mine[ROWS][COLS]= {0};
    char show[ROWS][COLS] = {0};
    //初始化
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //打印棋盘
    DisplayBoard(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    //布置雷
    SetMine(mine,ROW,COL);
    //DisplayBoard(mine,ROW,COL);
    FindMine(mine,show,ROW,COL);

    
 }
 void test()
 {
    int input = 0;
    srand((unsigned int)time(NULL));
do
{
    menu();
    printf("请选择:>\n");
    scanf("%d",&input);
    switch(input)
    {
    case 1 :
        game();
        break;
    case 0 :
        printf("退出游戏\n");
        break;
    default :
        printf("选择错误，请重新选择\n");
    }

} while (input);

    
 }
 int main()
 {
    test();
    system("pause");
    return 0;
 }