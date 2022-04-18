//
// Created by 潘光伟 on 2022/4/18.
//
//编程实现交换两个数（用指针函数实现）
#include "stdio.h"
void exchange(int* m,int* n)
{
   int tmp=*m;
   *m=*n;
   *n=tmp;

}
int main()
{

    int m=0;
    int n=0;

    scanf("%d%d",&m,&n);
    printf("交换之前:%d %d\n",m,n);
    printf("交换之后:");
    exchange(&m,&n);
    printf("交换之前:%d %d\n",m,n);
    return 0;
}