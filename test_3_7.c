//
// Created by 潘光伟 on 2022/3/7.
//
#include "game_3_7.h"
void menu()
{
    printf("**************************\n");
    printf("******** 1.开始游戏 ********\n");
    printf("******** 0.结束游戏 ********\n");
    printf("**************************\n");
}

int main()
{
    int input=0;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch (input) {
            case 1:
                printf("开始游戏");
                break;
            case 0:
                printf("游戏结束!\n");
                break;
            default:
                printf("输入错误，请重新输入！\n");
        }

    } while (input);
        return 0;
}
