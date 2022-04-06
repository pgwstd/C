//
// Created by 潘光伟 on 2022/4/6.
//
#include "stdio.h"
int main()
{
    char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    // 在数组的末尾添加一个元素
    arr[10] = 'k';
    // 在数组的开头添加一个元素
    arr[-1] = 'l';
    //输出数组
    for (int i = 0; i < 11; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}
