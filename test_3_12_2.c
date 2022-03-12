//
// Created by 潘光伟 on 2022/3/12.
//
#include "stdio.h"
int main()
{
//    int a=2;
//    printf("%p\n",&a);//打出地址
//    printf("%d\n",a);
//    int *p=&a;//p是用来存放地址的-p就是一个指针变量
//    *p=8;//解引用操作符-间接访问操作符
//    printf("%d\n",a);
//    int s=(int)3.14;//强制转换类型有个问题，就是精度会丢失
//    printf("%d\n",s);
    int arr[10]={0};
    char arr2[10]={0};
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr2));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(double));
    return 0;
}
