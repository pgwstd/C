//
// Created by 潘光伟 on 2022/3/29.
//
//输入两个整数，求它们的最小公倍数
#include "stdio.h"
int min_math(int n,int m)
{
    if(n>m){
        if(n%m==0)
            printf("最小公倍数是:%d\n",n);
        else
            printf("最小公倍数是:%d\n",n*m);

    }
    else
    {
        if(m>n)
            if(m%n==0)
                printf("最小公倍数是:%d\n",m);
            else
                printf("最小公倍数是:%d\n",n*m);
    }
}
int main()
{
    int i=0;
    int j=0;
    printf("请输入两个整数:\n");
    scanf("%d%d",&i,&j);
    min_math(i,j);
    return 0;
}
