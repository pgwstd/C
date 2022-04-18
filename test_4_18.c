//
// Created by 潘光伟 on 2022/4/18.
//
//从键盘输入一个字符串，输出字符串的长度
#include "stdio.h"
#include "string.h"
int count(char *str)
{
    int size=strlen(str);
    return size;
}
int main()
{
    char str[100];
    scanf("%s",str);
    int sz=count(str);
    printf("%d",sz);
    return 0;
}
