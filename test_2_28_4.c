//
// Created by 潘光伟 on 2022/2/28.
//
//计算1-100里面包含有9的字数个数
#include "stdio.h"
int compute()
{
    int count;
    for (int i = 1; i <=100 ; ++i) {
        if(i%10==9)   //9 19 29 39 49 59 69 79 89 99
            count++;
        if(i/10==9)    //90 91 92 93 94 95 96 97 98 99
            count++;
    }
    return count;
}
int main()
{
    int ret=compute();
    printf("%d",ret);
    return 0;
}
