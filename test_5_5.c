//
// Created by 潘光伟 on 2022/5/5.
//
//利用指针遍历数组
//键盘随机输入 6 个整数
#include "stdio.h"
void print_sort(int *p,int sz)
{
    printf("开始遍历数组:\n");
    for (int i = 0; i < sz; ++i) {
        printf("%d ",*(p+i));
    }
}
int main()
{
    int arr[6]={0};
    int *str=arr;
    for (int i = 0; i < 6; ++i) {
        scanf("%d",(str+i));
    }
    print_sort(arr,6);
    return 0;
}
