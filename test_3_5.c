//
// Created by 潘光伟 on 2022/3/5.
//
//三子棋
#include "stdio.h"
#include "game_3_5.h"
void menu()
{
    printf("***************************\n");
    printf("*********  1.开始游戏   *****\n");
    printf("*********  2.结束游戏     *****\n");
    printf("***************************\n");

}
void game()
{
    char board[ROW][COL];//存储数据 -二维数据
    InintBoard(board[ROW][COL]);//初始化横盘-空格
}
int main()
{
    int ipunt=0;
    do{
        menu();
        printf("请选择:>");
        scanf("%d",&ipunt);
        switch (ipunt) {
            case 1:
                game();
                break;
            case 0:
                printf("结束游戏\n");
                break;
            default:
                printf("你的输入出错，请重新选择\n");
                break;
        }

    } while ()
    return 0;
}
