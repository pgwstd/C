//
// Created by 潘光伟 on 2022/6/13.
//
#include "stdio.h"
int main()
{
    //从键盘输入一个整数，计算其各位数字之和，并输出。
    int num, sum = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("各位数字之和为%d\n",  sum);
    return 0;
}