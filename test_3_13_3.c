//
// Created by 潘光伟 on 2022/3/13.
//
#include "stdio.h"
int main()
{
    char a=3;//00000011->00000000000000000000000000000011
    char b=127;//01111111->00000000000000000000000001111111
    char c=a+b;//
    printf("%d\n",c);//-126
    return 0;
}
