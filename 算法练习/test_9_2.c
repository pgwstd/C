//
// Created by 潘光伟 on 2022/9/2.
//
//数组int A[10]数组元素升序
#include "stdio.h"

void Num_Rise(int *arr, int sz)
{

    int tmp=0;
    for (int i = 0; i < sz - 1; ++i)
    {
        for (int j = 0; j < sz - 1; ++j)
        {
            if(*(arr + j) > *(arr + j + 1)){
                tmp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = tmp;
            }
        }
    }

}

void Print_Num(int *arr, int sz)
{
    for (int i = 0; i < sz; ++i)
    {
        printf("%d ", *(arr+i));
    }
}

int main()
{
    int A[10] = { 0 };
    int size = sizeof(A) / sizeof(A[0]);
    printf("请输入十个数进行比较:\n");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d",&A[i]);
    }
    printf("没交换前:\n");
    Print_Num(A,size);
    printf("\n");
    Num_Rise(A, size);
    printf("交换后:\n");
    Print_Num(A, size);
    return 0;
}