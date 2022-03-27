//
// Created by 潘光伟 on 2022/3/27.
//
//课后作业
#include "stdio.h"
int main()
{
    float F=0;
    float c=0;
    printf("请输入一个华氏温度:\n");
    scanf("%f",&F);
    c=5.0/9*(F-32);
    printf("它的华氏温度是:%.2f\n",c);
    return 0;
}
