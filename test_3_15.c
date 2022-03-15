//
// Created by 潘光伟 on 2022/3/15.
//
//有问题的代码分析
#include "stdio.h"
int fun()
{
    int b=1;
    return ++b;
}

int main()
{

    int  count;
    count=fun()-fun() * fun();//这个代码是有错的，fun调用的赋值时候，不能确定是那个先运算或赋值
    printf("%d\n",count);
    return 0;
}

