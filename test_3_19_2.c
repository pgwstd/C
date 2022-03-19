//
// Created by 潘光伟 on 2022/3/19.
//
#include "stdio.h"
int main()
{
    int find=0;
    int n=0;
    scanf("%d",&n);
    while (!find)
    {
        if(n%5==1||n%6==5||n%7==4||n%11==10)
        {
            printf("n=%d\n",n);
            find=1;
        }

    }
    return 0;
}

