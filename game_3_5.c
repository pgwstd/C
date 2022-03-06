//
// Created by 潘光伟 on 2022/3/5.
//
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
            board[i][j]=' ';
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
        if (i < row - 1)
        {
            for (j = 0; j < col; ++j)
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
            printf("\n");
        }
    }
}