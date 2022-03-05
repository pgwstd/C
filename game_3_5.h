//
// Created by 潘光伟 on 2022/3/5.
//
#include "stdio.h"
#ifndef C_HOMEWORK_GAME_3_5_H
#define C_HOMEWORK_GAME_3_5_H
//符号的定义-棋盘大小
#define ROW 3
#define COL 3

//阳函数的声明
//初始化横盘为空格
void InintBoard(char board[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);
#endif //C_HOMEWORK_GAME_3_5_H
