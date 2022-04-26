//
// Created by 潘光伟 on 2022/4/26.
//
//实现一个 int cal(int *array,int n) 的函数求出长度为 n 的数组的和
#include "stdio.h"
int cal(int *array,int n)
{
    int i=0;
    int sum=0;
    for (i = 0; i < n; ++i) {
        sum+=*(array+i);
    }
    return sum;
}
int main()
{
    int sz;
    int i=0;
    printf("请定义刚数组长度:\n");
    scanf("%d",&sz);
    int* array[sz];
    printf("请输入数组的无素:\n");
    for (i = 0; i < sz; ++i) {
        scanf("%d",array[i]);
    }
    cal(array,sz);
    return 0;
}
