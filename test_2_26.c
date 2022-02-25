//
// Created by 潘光伟 on 2022/2/25.
//
#include <stdio.h>
#include "string.h"
//运用递归计算斐波那契数列
int Fac(int i)
{
    if(i<=0)
    {
        return 1;
    }
    else
    {
        return i * Fac(i-1);
    }
}
int fib(int i)
{
//    if(i<=2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(i-1)+fib(i-2);
//    }
    int a=1;
    int b=1;
    int c=1;
    while (i>2)
    {
        c=a+b;
        a=b;
        b=c;
        i--;
    }
    return c;
}

int main()
{
    int n=0;
    scanf("%d",&n);//输入要计算数列的第几位
    int ret=fib(n);//调用函数
    printf("%d\n",ret);

    return 0;
}


