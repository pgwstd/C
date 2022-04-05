//
// Created by 潘光伟 on 2022/4/5.
//
#include "stdio.h"
int main()
{
    int arr[5]={1,2,6,4,3};
    //冒泡排序
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //数组输出
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
