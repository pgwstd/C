//
// Created by 潘光伟 on 2022/5/1.
//
#include "stdio.h"
void bubble_sort(int arr[],int sz)
{
    int tmp=0;
    for (int i = 0; i < sz-1; ++i) {
        for (int j = 0; j < sz-1-i; ++j) {
            if(arr[j]>arr[j+1])
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
        }
    }
    printf("\n");
}
void print_array(int arr[],int sz)
{
    for (int i = 0; i < sz; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    print_array(arr,sz);
    bubble_sort(arr,sz);
    print_array(arr,sz);
    return 0;
}
