//
// Created by 潘光伟 on 2022/3/7.
//

#ifndef C_HOMEWORK_GAME_3_7_H
#define C_HOMEWORK_GAME_3_7_H
#include "stdio.h"
#include "stdlib.h"
#include "time.h"


#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2


//初始化棋盘的
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
#endif //C_HOMEWORK_GAME_3_7_H
