//
// Created by 潘光伟 on 2022/3/27.
//
//课后作业
#include "stdio.h"
#define PI 3.14
int main()
{
    float r=0;
    float h=0;
    float week=0;  //圆的周长
    float area=0;  //圆的面积
    printf("请输入圆的半径:\n");
    scanf("%f",&r);
    printf("请输入圆柱的高:\n");
    scanf("%f",&h);
    week=2*PI*r;
    printf("圆的周长:%.2f\n",week);
    area=PI*r*r;
    printf("圆的面积:%.2f\n",area);
    return 0;
}
