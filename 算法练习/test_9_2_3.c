//
// Created by 潘光伟 on 2022/9/2.
//
//在32位系统中使用int类型计算:A=32.85，B=68.53，计算A+B的和，并返回计算结果的100倍整型
//值。函数函数定位为:int Float100Sum(float a, float b)，其中返回值为计算结果的100倍。


#include "stdio.h"
int Float100Sum(float a, float b)
{
    return (int)((a + b) * 100);
}
int main()
{
    float A = 32.85;
    float B = 68.53;
    int sum = Float100Sum(A,B);
    printf("%d",sum);
    return 0;
}