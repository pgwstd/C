//
// Created by 潘光伟 on 2022/4/18.
//
//棱形打印
#include "stdio.h"
int main()
{
    int leng=0;
    printf("请输入你要打印*的最大个数:\n");
    scanf("%d",&leng);
    for (int i = 0; i < leng; ++i) {
        //上面的
        //打印一行
        //打印空格
        for (int j = 0; j <leng-1-i; ++j) {
            printf(" ");
        }
        //打印*
        for (int j = 0; j < 2*i+1; ++j) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < leng-1; ++i) {
        //下面的
        //打印一行
        //打印空格
        for (int j = 0; j <=i; ++j) {
            printf(" ");
        }
        //打印*
        for (int j = 0; j < 2*(leng-1-i)-1; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}