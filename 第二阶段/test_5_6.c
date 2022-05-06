//
// Created by 潘光伟 on 2022/5/6.
//
#include "stdio.h"
int main()
{
    int* arr={1,2,3,4,5};
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(*arr));
    printf("%d\n",sizeof(arr+1));
    printf("%d\n",sizeof(&arr+1));
    printf("%d\n",sizeof(arr[0]));

    return 0;
}
