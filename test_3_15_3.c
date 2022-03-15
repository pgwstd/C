//
// Created by 潘光伟 on 2022/3/15.
//
//作业
#include "stdio.h"
//实现reverse函数，函数完成数组元素的逆置
void reverse(int arr3[],int size)
{
    for (int i = size-1; i >=0 ; --i) {
        printf("%d ",arr3[i]);
    }
}
//实现print函数，打印数组的每一个函数
void print(int arr2[],int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d ",arr2[i]);
    }
}
//实现init函数使数组初始化为0
void init(int arr1[],int size)
{
    for (int i = 0; i < size; ++i) {
        arr1[i]=0;
        printf("%d ", arr1[i]);
    }

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=(sizeof(arr)/sizeof(arr[0]));
    init(arr,size);
    printf("\n");
    print(arr,size);
    printf("\n");
    reverse(arr,size);
    return 0;
}
