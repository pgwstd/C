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
    for (i = 0;  i< row; i++)
    {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < row - 1)
        {
            printf("---|---|---\n");
        }
    }
}