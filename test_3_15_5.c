//
// Created by 潘光伟 on 2022/3/15.
//
#include "stdio.h"
int main()
{
    int a=22;
    int *pa=&a;
    *pa=33;
    printf("%d",a);

    return 0;
}

