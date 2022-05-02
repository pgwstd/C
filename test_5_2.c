//
// Created by 潘光伟 on 2022/5/2.
//
#include "stdio.h"
#include "stdlib.h"
//打印数组
void print_array(int arr[],int sz)
{
    for (int i = 0; i < sz; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int cmp_int(const void* e1,const void* e2)
{
    return *(int*)e2-*(int*)e1;
}
int main()
{

//    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int sz=sizeof(arr)/sizeof(arr[0]);
    print_array(arr,sz);
    qsort(arr,sz,4,cmp_int);
    print_array(arr,sz);
    return 0;
}