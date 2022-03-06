//
// Created by 潘光伟 on 2022/3/5.
//
//游戏调用一些用法函数和设定在此，
#include "game_3_5.h"
//初始化棋盘
void InintBoard(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            board[i][j]=' ';//初始化棋盘，棋盘的横与列，不放置任何元素其实也就是放空格
        }
    }
}
//打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for (i = 0;  i< row; ++i)
    {
        for (j = 0; j < col; ++j)
        {
            printf(" %c ",board[i][j]);//循环打印空格
            if(j<col-1)
            printf("|");//打印出2个|符号，所以就是col-1
        }
        printf("\n");//打印完一行就换行
        if (i < row - 1)//减少打印一行—————|——————|————符号，让其更美观
        {
            for (j = 0; j < col; ++j)//原理和上面一样
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
            printf("\n");
        }
    }
}