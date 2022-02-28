//
// Created by 潘光伟 on 2022/2/28.
//
//递归实现n个数的阶乘
#include "stdio.h"
int factral(int i)
{
    int sum=1;
    if(i<0) {
        factral(i - 1);
        sum*=i;
    }
    return sum;
}
int main()
{

    int n=0;
    printf("请输入你要阶乘的数:\n");
    scanf("%d",&n);
    int ret=factral(n);
    printf("%d\n",ret);
    return 0;
}
