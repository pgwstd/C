//
// Created by 潘光伟 on 2022/3/12.
//
#include "stdio.h"
int main()
{
    int a=2;
    printf("%p\n",&a);//打出地址
    printf("%d\n",a);
    int *p=&a;//p是用来存放地址的-p就是一个指针变量
    *p=8;//解引用操作符-间接访问操作符
    printf("%d\n",a);
    return 0;
}
