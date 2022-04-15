//
// Created by 潘光伟 on 2022/4/15.
//

//使用指针打印出一维数组，不可以使用下标
#include "stdio.h"
int main()
{

    int arr[5]={1,2,3,45,56};
    int *p=&arr;
    printf("%d\n",*p);//取出刚数组的第一元素
    for (int i = 0; i < 5; ++i) {
        printf("%d ",*(p+i)); //p是这个数组地址，当它加上i再解引用是就可以得到这个数组的每一个元素
    }

    return 0;
}