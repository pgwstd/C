//
// Created by 潘光伟 on 2022/4/9.
//
#include "stdio.h"
int main()
{
    int a=9;
    float* pfloat=(float*)&a;
    printf("%d\n",a);
    printf("%f\n",*pfloat);

    *pfloat=9.0;
    printf("%d\n",a);
    printf("%f\n",*pfloat);

    return 0;
}

