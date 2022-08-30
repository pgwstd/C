//
// Created by 潘光伟 on 2022/7/12.
//
#include "stdio.h"
int main()
{

    int arr[] = {1,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; ++i)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}