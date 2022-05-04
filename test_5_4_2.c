//
// Created by 潘光伟 on 2022/5/4.
//
//运用指针的方式交换数
#include "stdio.h"
void swap(int* m,int* n)
{
    int *p=NULL;
    *p=*m;
    *m=*n;
    *n=*p;
}
int main()
{
    int a=0;
    int b=0;
    printf("请输入两个数:\n");
    scanf("%d%d",&a,&b);
    printf("没交换之前:%d%d",a,b);
    swap(&a,&b);
    printf("交换之后:%d%d",a,b);
    return 0;
}
