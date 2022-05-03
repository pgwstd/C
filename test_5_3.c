//
// Created by 潘光伟 on 2022/5/3.
//
//获取字符串长度(从键盘输入一串字符串，输出该字符串的长度)
#include "stdio.h"
#include "string.h"
int main()
{

    char arr[100];
    scanf("%s",arr);
    int sz=strlen(arr);
    printf("%d ",sz);
    return 0;
}

