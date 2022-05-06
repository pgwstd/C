//
// Created by 潘光伟 on 2022/3/27.
//
//课后作业
#include "stdio.h"
int main()
{
    char ch1='C';
    char ch2='h';
    char ch3='i';
    char ch4='n';
    char ch5='a';
    printf("没有加密之前：\n");
    printf("%c%c%c%c%c\n",ch1,ch2,ch3,ch4,ch5);
    printf("加密之后：\n");
    printf("%c%c%c%c%c",ch1+4,ch2+4,ch3+4,ch4+4,ch5+4);
    return 0;
}

