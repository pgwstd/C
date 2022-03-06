//
// Created by 潘光伟 on 2022/3/5.
//
//游戏调用一些用法函数和设定在此
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
            printf("|");//少打一列|符号，所以就是col-1，让其美观
        }
        printf("\n");//打印完一行就换行
        if (i < row - 1)//减少打印一行—————|——————|————符号，让其更美观
        {
            for (j = 0; j < col; ++j)//打印原理和上面一样
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
            printf("\n");
        }
    }
}
//玩家下棋
void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家走:>\n");
    while (1)
    {
    printf("请输入下棋的坐标:>");
    scanf("%d %d",&x,&x);
    //判断坐标合法性
      if (x >= 1 && x <= row && y >= 1 && y <= col)
      {
          //下子
          //检测坐标是不否被占用
          if(board[x-1][y-1]==' '){
              board[x-1][y-1]='*';
              break;
          }
          else{
              printf("坐标被占用，请重新输入！\n");
          }
      }
      else{
          printf("坐标非法，请重新输入！");
      }
    }
}