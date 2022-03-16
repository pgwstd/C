//
// Created by 潘光伟 on 2022/3/16.
//
//
#include "stdio.h"
void bubble_sort(int a[],int sz)
{
//    int tmp=0;
    for (int i = 0; i < sz; ++i) {
//        tmp=a[i];
//        a[i+1]=a[i];
//        a[i]=tmp;
     if(a[i]>a[i+1])
         a[i]=a[i+1];
    }
}
int main()
{
//    int number=0;
    int arr[]={0,1,2,3,4,5,6,7,8,9};
//    printf("请输入你要输入数的个数:\n");
//    scanf("%d",arr);
    int size=(sizeof(arr)/sizeof(arr[0]));
    bubble_sort(arr,size);
    return 0;
}
