//
// Created by 潘光伟 on 2022/3/15.
//
#include "stdio.h"
int main()
{
    int a=22;
    int *pa=&a;
    *pa=33;
//    int p;//变量没有在内存里面准确的分配,所以没有特定的地址
//    *p=10;// 这个就叫野指针
    printf("%d",a);

    return 0;
}

