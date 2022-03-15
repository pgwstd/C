//
// Created by 潘光伟 on 2022/3/15.
//
//static的使用
#include "stdio.h"
void printf_math()
{
    static int a=0;
    a++;
    printf("%d\n",a);
}
int main()
{

    int i=0;
    for (i = 1; i <=10 ; ++i) {
        printf_math();
    }
    return 0;
}
