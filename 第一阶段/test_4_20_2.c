//
// Created by 潘光伟 on 2022/4/20.
//
//写出一个函数，函数可以实现把数组的奇位数放在前最前面
//而偶数放在后面
#include "stdio.h"
void move(int arr[],int sz)
{
    int left=0;
    int right=sz-1;
    while (left<right) {
        //(用left<right是防止全偶数或全奇数时向后找栈溢出的情况)
        //从左到右找出是偶数的数
        while ((left<right) && (arr[left] % 2 == 1)) {
            left++;
        }
        //从右到左找出奇数的数
        while ((left<right) && (arr[right] % 2 == 0)) {
            right--;
        }
        //交换-->把左边的偶数交换到右边奇数的位置
        if (left < right) {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
    }
}
void print(int arr[],int sz)
{
    for (int i = 0; i < sz; ++i) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);  //求出数组的元素个数
    move(arr,sz);  //移动数组函数
    print(arr,sz);  //打印数组函数
    return 0;
}

