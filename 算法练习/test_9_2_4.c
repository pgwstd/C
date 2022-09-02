//
// Created by 潘光伟 on 2022/9/2.
//
//比较浮点大小，float A, float B是否相等，写出判断式，即判断A=B如何用C语言实现。

#include "stdio.h"
#include "math.h"
void Float_Compare(float a,float b)
{
    if(fabs(a-b) < 0.0000001)
    {
        printf("两数相等！");
    } else{
        printf("两数不等！");
    }
}

int main()
{
    float A = 0;
    float B = 0;
    printf("请输入两个浮点数进行比较:\n");
    scanf("%f%f",&A,&B);
    Float_Compare(A,B);
    return 0;
}