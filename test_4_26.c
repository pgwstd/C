//
// Created by 潘光伟 on 2022/4/26.
//
//实现一个 int cal(int *array,int n)
// 的函数求出长度为 n 的数组的和
#include "stdio.h"
#include "stdlib.h"
int cal(int *array,int n)
{
    int sum=0;
    for (int i = 0; i < n; ++i) {
        sum+=*(array+i);
    }
    return sum;
}
int main()
{
    int sz;
    int* arr;
    int i=0;
    printf("请定义刚数组长度:\n");
    scanf("%d",&sz);
    arr=(int *)malloc(sz*sizeof(int));//动态开辟空间n个
    printf("请输入数组的无素:\n");
    for (i = 0; i < sz; ++i) {
        scanf("%d",&arr[i]);
    }
    int sum=cal(arr,sz);
    printf("和是:%d",sum);
    return 0;
}
