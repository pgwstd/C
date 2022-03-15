//
// Created by 潘光伟 on 2022/3/15.
//
//作业
#include "stdio.h"
//实现reverse函数，函数完成数组元素的逆置
void reverse(int arr3[],int size)
{
    int left=0;
    int right=size-1;
    while (left<right) {
        int tmp = arr3[left];
        arr3[left] = arr3[right];
        arr3[right] = tmp;
        left++;
        right--;
    }
}
//实现print函数，打印数组的每一个函数
void print(int arr2[],int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d ",arr2[i]);
    }
    printf("\n");
}
//实现init函数使数组初始化为0
void init(int arr1[],int size)
{
    for (int i = 0; i < size; ++i) {
        arr1[i]=0;

    }

}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=(sizeof(arr)/sizeof(arr[0]));
    print(arr,size);

    reverse(arr,size);
    print(arr,size);

    init(arr,size);
    print(arr,size);
    return 0;
}
