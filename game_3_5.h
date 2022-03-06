//
// Created by 潘光伟 on 2022/3/5.
//
//游戏头文件，头文件全部在这引用，让代码整体性更好
#include "stdio.h"
#ifndef C_HOMEWORK_GAME_3_5_H
#define C_HOMEWORK_GAME_3_5_H
//符号的定义-棋盘大小，可根据自身爱好自己调准
#define ROW 3 //棋盘的横坐标可放的元素
#define COL 3 //棋盘的纵坐标可放的元素

//函数的声明
//初始化横盘为空格函数
void InintBoard(char board[ROW][COL],int row,int col);
//打印棋盘函数
void DisplayBoard(char board[ROW][COL],int row,int col);
#endif //C_HOMEWORK_GAME_3_5_H
