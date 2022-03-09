//
// Created by 潘光伟 on 2022/3/7.
//
//扫雷
#include "game_3_7.h"
void menu()
{
    printf("**************************\n");
    printf("******** 1.开始游戏 ********\n");
    printf("******** 0.结束游戏 ********\n");
    printf("**************************\n");
}

    void game()
    {
        char mine[ROWS][COLS] = {0};//存放布置好的雷的信息
        char show[ROWS][COLS] = {0};//存放排查出的雷的信息
        //初始化棋盘
        InitBoard(mine, ROWS, COLS, '0');//'0'
        InitBoard(show, ROWS, COLS, '*');//'*'

        //打印一下棋盘
        DisplayBoard(show, ROW, COL);

        //布置雷
        SetMine(mine, ROW, COL);
        //DisplayBoard(mine, ROW, COL);

        //排查雷
        FindMine(mine, show, ROW, COL);
    }

    int main()
    {
        int input = 0;
        srand((unsigned int) time(NULL));

        do {
            menu();
            printf("请选择:>");
            scanf("%d", &input);
            switch (input) {
                case 1:
                    game();//扫雷游戏
                    break;
                case 0:
                    printf("退出游戏\n");
                    break;
                default:
                    printf("选择错误，重新选择\n");
                    break;
            }
        } while (input);

        return 0;
    }
