//
// Created by 潘光伟 on 2022/5/16.
//
#include "stdio.h"
int find_sort(int *ptr,int k,int sz)
{
    int* left=ptr;
    int* right=ptr+sz-1;
    while (left < right)
    {
        if(k < *(ptr+sz/2))
        {

        }

    }
}
int main()
{

    int  arr[]={1,2,3,4,5,6,7,8,9,10};
    int kil=7;
    int size=sizeof(arr)/sizeof(arr[0]);
    scanf("%d",&kil);
    find_sort(arr,kil,size);
    return 0;
}
