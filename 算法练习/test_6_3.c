//
// Created by 潘光伟 on 2022/6/3.
//
//算法练习
//输入一个字符，然后输出以下效果
//  #
// ###
//#####
// ###
//  #
#include "stdio.h"
int main()
{

    char ch=0;
    printf("请输入你要打印的字符:\n");
    scanf("%c",&ch);
    int n=3;
    //打印上半部分
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n-i; j++)
            printf(" ");    //打印空格
        for(int j = 0; j < 2*i-1; j++)
            printf("%c", ch);   //打印字符
        printf("\n");
    }
    //打印下半部分
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
            printf(" ");
        for(int j = 0; j < 2*(n-i)-1; j++)
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}