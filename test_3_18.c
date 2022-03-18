//
// Created by 潘光伟 on 2022/3/18.
//
#include "stdio.h"
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    int *pend=arr+9;
    while (p<=pend){
        printf("%d\n",*p);
        p++;
    }
    return 0;
}
