//
// Created by 潘光伟 on 2022/9/2.
//
//数组int A[10]数组元素升序
#include "stdio.h"

int Num_short(int arr[],int sz){
    for (int i = 0; i < sz; ++i)
    {
        if(arr[i] > arr[i+1]){
            int tmp;
            arr[i] = tmp;
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
        }
        return arr;
    }
}


int main()
{
    int A[10] = {6,3,2,1,9,5,2,4,7,10};
    int size = sizeof (A) / sizeof (A[0]);
    printf("%d",Num_short(A,size));
    return 0;
}