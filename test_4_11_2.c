//
// Created by 潘光伟 on 2022/4/11.
//
#include "stdio.h"
void my_printf(int (*p)[5],int r,int c)
{
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            //p+i的解引用得到的是这个二维数组的行的首元素，当p+i解引用得到行的首元素再加上j解引用时，就会得到该二维数组的每个元素
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
}

int main()
{

    int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    my_printf(arr,3,5);
    return 0;
}

