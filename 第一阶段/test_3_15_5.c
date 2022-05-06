//
// Created by 潘光伟 on 2022/3/15.
//
#include "stdio.h"
int main()
{
    int a=22;
    int *pa=&a;
    *pa=33;
//    int p;//变量没有在内存里面准确的分配,所以没有特定的地址
//    *p=10;// 这个就叫野指针

//    int arr[10]={0};
//    int *p=arr;
//    for (int i = 0; i < =10; ++i) {  //指针越界也是野指针的一种(非法访问内存！)
//        *p=i;
//        p++;
//
//    }
    printf("%d",a);

    return 0;
}

