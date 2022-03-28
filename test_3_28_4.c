//
// Created by 潘光伟 on 2022/3/28.
//
//输入两个数，判断这两个二进制位里不同的数有几个，如22 33 有5个
#include "stdio.h"
int main()
{
    int n=0;
    int m=0;
    int count=0;
    printf("请输入两个数:\n");
    scanf("%d%d",&n,&m);
    for (int i = 0; i < 32; ++i) {   // 一个整型数字只有32个位，所以循环32次
         if((n>>i & 1)  !=  (m>>i &1 )){
             count++;
         }
    }
    printf("%d",count);
    return 0;
}