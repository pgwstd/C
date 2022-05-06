//
// Created by 潘光伟 on 2022/3/13.
//
#include "stdio.h"
int main()
{
    int a=4;
    float b=3.5f;
    float c=(float)a+b;//要进行顺序转换不然会出现丢失精度
    printf("%f",c);
    return 0;
}

