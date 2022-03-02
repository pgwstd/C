//
// Created by 潘光伟 on 2022/3/2.
//
//编写一个函数实现n的k次方，使用递归实现
#include "stdio.h"
double Pow(int n,int k)
{
    if(n>0&&k==0)
        return 1;//一个数的零次方时
    else if(k>0)
        return n* Pow(n,k-1);//一个数的正数次方时
        else
        return 1.0/Pow(n,-k);//一个数的负次方时
}

int main()
{
    int n=0;
    int k=0;
    printf("请输入两个数:\n");
    scanf("%d %d",&n,&k);
    double ret=Pow(n,k);
    printf("%lf\n",ret);
    return 0;
}

