//
// Created by 潘光伟 on 2022/3/7.
//
#include "game_3_7.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("---------扫雷游戏-----------\n");
    //打印列号
    for (i = 0; i <= col; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++)
    {
        printf("%d ", i);
        for (j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("---------扫雷游戏-----------\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
    //布置10个雷
    int count = EASY_COUNT;
    while (count)
    {
        //生产随机的下标
        int x = rand()%row+1;//等于8加1等于9
        int y = rand()%col+1;
        if (mine[x][y] == '0')
        {
            mine[x][y] = '1';
            count--;//布置好一次就减1
        }
    }
}


static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
    //计算翻开坐标周围有多少个雷
    return mine[x - 1][y] +
           mine[x - 1][y - 1] +
           mine[x][y - 1] +
           mine[x + 1][y - 1] +
           mine[x + 1][y] +
           mine[x + 1][y + 1] +
           mine[x][y + 1] +
           mine[x - 1][y + 1] - 8 * '0';//因为棋盘里面显示的都是字符，所以要是想计算要转成整型
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    //1. 输入排查的坐标
    //2. 检查坐标处是不是雷
    // (1) 是雷   - 很遗憾炸死了 - 游戏结束
    // (2) 不是雷  - 统计坐标周围有几个雷 - 存储排查雷的信息到show数组，游戏继续

    int x = 0;
    int y = 0;
    int win = 0;

    while (win<row*col- EASY_COUNT)
    {
        printf("请输入要排查的坐标:>");
        scanf("%d%d", &x, &y);

        //判断坐标的合法性
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (mine[x][y] == '1')//如果里面是雷的操作
            {
                printf("COME OVER!\n");
                DisplayBoard(mine, row, col);
                break;
            }
            else
            {
                //不是雷情况下，统计x,y坐标周围有几个雷
                int count = get_mine_count(mine, x, y);
                show[x][y] = count+'0';
                //显示排查出的信息
                DisplayBoard(show, row, col);
                win++;
            }
        }
        else
        {
            printf("坐标不合法，请重新输入\n");
        }
    }

    if (win == row * col - EASY_COUNT)//WIN循环的次数等于棋盘格子数减去雷的个数是，就是证明排完了
    {
        printf("WIN!\n");
        DisplayBoard(mine, row, col);
    }
}