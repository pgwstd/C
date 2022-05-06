//
// Created by 潘光伟 on 2022/3/15.
//
//写出一个函数让两个数组中的内存进行交换
#include "stdio.h"
void exchange(int a1[],int a2[],int size)
{
    for (int i = 0; i < size; ++i)
    {
        int tmp = a1[i];
        a1[i] = a2[i];
        a2[i] = tmp;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int arr2[]={10,9,8,7,6};
    int size=(sizeof(arr)/sizeof(arr[0]));
    exchange(arr,arr2,size);
    return 0;
}
