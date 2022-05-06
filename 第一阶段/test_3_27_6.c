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
    float ball_area=0; //球的表面积
    float ball_volume=0; //球的体积
    float cylinder_volume=0;
    printf("请输入圆的半径:\n");
    scanf("%f",&r);
    printf("请输入圆柱的高:\n");
    scanf("%f",&h);
    week=2*PI*r;
    printf("圆的周长:%.2f\n",week);
    area=PI*r*r;
    printf("圆的面积:%.2f\n",area);
    ball_area=4*PI*r*r;
    printf("球的表面积:%.2f\n",ball_area);
    ball_volume=4.0/3*PI*r*r*r;
    printf("球的体积:%.2f\n",ball_volume);
    cylinder_volume=PI*r*r*h;
    printf("圆柱体的体积:%.2f\n",cylinder_volume);
    return 0;
}
