//
// Created by 潘光伟 on 2022/9/2.
//
//数组int A[10]数组元素升序
#include "stdio.h"

void Num_Rise(int *arr, int sz)
{

    int tmp = 0;
    for (int i = 0; i < sz; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
    }
}


int main()
{
    int A[10] = {6, 3, 2, 1, 9, 5, 2, 4, 7, 10};
    int size = sizeof(A) / sizeof(A[0]);
    Num_Rise(A, size);
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", A[i]);
    }
    return 0;
}