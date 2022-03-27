//
// Created by 潘光伟 on 2022/3/27.
//
//课后作业
#include "stdio.h"
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int max;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        max=a;
    else
        max=b;
    if(max>c)
        printf("%d\n",max);
    else
        printf("%d\n",c);
    return 0;
}
