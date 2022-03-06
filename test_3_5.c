//
// Created by 潘光伟 on 2022/3/5.
//
//三子棋游戏,游戏主界面
#include "game_3_5.h"
void menu()
{
    printf("***************************\n");
    printf("********  1.开始游戏  ******\n");
    printf("********  0.结束游戏  ******\n");
    printf("***************************\n");

}

void game()
{
    char board[ROW][COL];//存储数据 -二维数据
    InintBoard(board,ROW,COL);//初始化横盘-空格
    DisplayBoard(board,ROW,COL);//打印棋盘
    char ret=0;//接收游戏状态
    while (1)
    {
        //玩家下棋
        PlayerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);//打印棋盘
        ret=IsWin(board,ROW,COL);//判断游戏是否赢
        if(ret!='c')
            break;

        //电脑下棋
        ComputerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);//打印棋盘
        ret=IsWin(board,ROW,COL);//判断游戏是否赢
        if(ret!='c')
            break;
    }
    if(ret=='*'){
        printf("玩家赢了!\n");
    }
    else if(ret=='#')
    {
        printf("电脑赢了!\n");
    }
    else
    {
        printf("平局了\n");
    }
}
int main()
{
    int ipunt=0;
    srand((unsigned int)time(NULL));
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

    } while (ipunt);
    return 0;
}
