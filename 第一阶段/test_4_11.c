//
// Created by 潘光伟 on 2022/4/11.
//
//demo测试
#include "stdio.h"
#include "stdlib.h"
int main()
{
    //创建一个指针数组
    int *p[3];

    //分配三个指针
    p[0] = (int *)malloc(sizeof(int));
    p[1] = (int *)malloc(sizeof(int));
    p[2] = (int *)malloc(sizeof(int));

    //分配三个整数
//    *p[0] = 1;
//    *p[1] = 2;
//    *p[2] = 3;

    //从键盘输入这三个数
    printf("请输入三个整数:\n");
    scanf("%d%d%d",p[0],p[1],p[2]);
    //打印三个整数
    printf("%d %d %d\n", *p[0], *p[1], *p[2]);  //此处的*不是代表指针，而是代表的解引用（也就是取出在该地址中的值）
    printf("%d\n",sizeof(char *));
    printf("%d\n",sizeof(short *));
    printf("%d\n",sizeof(int *));//指针在c中也叫做"指针变量"
    printf("%d\n",sizeof(float *));//指针在也是有大小的值（在32位机中是4个字节，64位机中是8个字节）
    return 0;
}