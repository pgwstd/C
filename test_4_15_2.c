//
// Created by 潘光伟 on 2022/4/15.
//

//使用指针打印出一维数组，不可以使用下标
#include "stdio.h"
int main()
{

    int arr[5]={1,2,3,45,56};
    int *p=&arr;
    for (int i = 0; i < 5; ++i) {
        printf("%d ",*(p+i));
    }
    return 0;
}