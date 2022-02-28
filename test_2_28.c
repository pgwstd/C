//
// Created by 潘光伟 on 2022/2/28.
//
//用递归倒顺打印数组的每一位
#include "stdio.h"
int  printf_function(int* p,int size,int  index) {
//    for (int i = 0; i < size; ++i) {
//        printf("%d\n", arr[i]);//正顺打印出每一位
//
//    }
     if(index<size-1)
     {
         printf_function(p,size,index+1);
     }
    printf("%d\n", p[index]);

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf_function(arr,size,0);
    return 0;
}
