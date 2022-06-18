//
// Created by 潘光伟 on 2022/6/18.
//
#include "stdio.h"
int main()
{
    //冒泡排序
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}