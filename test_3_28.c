//
// Created by 潘光伟 on 2022/3/28.
//
//练习
#include "stdio.h"
int main()
{
    int a,b,c;
    a=5;
    c=++a;  //c=6 a=6
    b=++c,c++,++a,a++;  //b=7 c=8  a=8
    b+=a++ + c;//b=23 a=9
    printf("a=%d b=%d c=%d\n",a,b,c);//a=9    b=23    c=8
    return 0;
}
