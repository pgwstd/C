//
// Created by 潘光伟 on 2022/3/11.
//
//交换两个数的变量，不能使用第三个变量，即int a=3,int b=5;交换后a=5,b=3;
#include "stdio.h"
int main()
{
    int a=3;
    int b=5;
    printf("a=%d ",a);
    printf("b=%d\n",b);
//    a=a+b;
//    b=a-b;
//    a=a-b;
    a=a^b;//二进制位是110=6
    b=a^b;//二进制位是011=3
    a=a^b;//二进制位是101=5
    printf("a=%d ",a);
    printf("b=%d\n",b);
    return 0;
}

