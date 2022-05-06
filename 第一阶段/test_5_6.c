//
// Created by 潘光伟 on 2022/5/6.
//
//新数组求和
//第一行输入一个整数n，表示数组的长度
//第二行输入n个正整数，表示数组中的每个数字的值
//输出int cal(int* array,int n)求出数组array的和
#include "stdio.h"
#include "stdlib.h"
int cal(int* array,int len)
{
    int sum=0;
    for (int i = 0; i < len; ++i) {
          sum+=array[i];
    }
    return sum;
}
int main()
{
    int n=0;
    int* arr;
    printf("请输入你要定义数组的长度:\n");
    scanf("%d",&n);
    arr=(int*) calloc(n,sizeof(int));//动态分配连续空间的数组
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    int ret=cal(arr,n);
    printf("%d",ret);
    return 0;
}
