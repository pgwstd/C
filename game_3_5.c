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
    scanf("%d %d",&x, &y);
    //判断坐标合法性
      if (x >= 1 && x <= row && y >= 1 && y <= col)
      {
          //玩家下子
          //检测坐标是不否被占用
          if(board[x-1][y-1]==' ')
          {
              board[x-1][y-1]='*';
              break;
          }
          else{
              printf("坐标被占用，请重新输入！\n");
          }
      }
      else
      {
          printf("坐标非法，请重新输入！\n");
      }
    }
}
//电脑下棋
void ComputerMove(char board[ROW][COL],int row,int col)
{
    printf("电脑走:>\n");
    while (1) {
        int x = rand() % row;//随机值模上行等于行的一个随机值
        int y = rand() % col;//随机值模上列等于列的一个随机值
        if (board[x][y] == ' ') {
            //电脑下子
            board[x][y] = '#';
            break;
        }
    }
}
int IsFull(char board[ROW][COL], int row, int col)
    {
        int i = 0;
        int j = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (board[i][j] == ' ') {
                    return 0;
                }
            }
        }
        return 1;
    }
//游戏输赢判断
    char IsWin(char board[ROW][COL], int row, int col)
    {
        int i = 0;
        //判断三行是否一样，一样就是赢了
        for (i = 0; i < row; ++i) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
                return board[i][1];
            }
        }
        //判断三列是否是一样，一样就是赢了
        for (i = 0; i < col; ++i) {
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
                return board[1][i];
            }
        }
        //判断对角是否一样，一样就是赢了
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
            return board[1][1];
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
            return board[1][1];
        }
        //平局
        //如果棋盘满了就返回Q，没满返回C
        int ret = IsFull(board, row, col);
        if (ret == 1) {
            return 'Q';
        }
        //不满就返回C
        return 'C';
    }