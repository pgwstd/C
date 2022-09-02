//
// Created by 潘光伟 on 2022/9/2.
//
//在32位系统中，实现 unsigned short int A[10]数组的求和，
//及均值计算。(其中 unsigned int为32位数据，unsigned short int为16位数据。)
#include "stdio.h"

short int Arr_sum(short int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    unsigned short int A[10] = { 0 };
    printf("请输入十个数:\n");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%hd",&A[i]);
    }
    short int sum = Arr_sum(A);
    printf("和为:%d",sum);
    return 0;
}