//
// Created by 潘光伟 on 2022/5/10.
//
//strlen函数递归实现
#include "stdio.h"
#include "assert.h"
//strlen函数计数实现
//int strlen_sort(const char* array)
//{
//    int count=0;
//    assert(array);
//    while (*array  != '\0'){
//        count++;
//        array++;
//    }
//    return count;
//}
//strlen函数递归实现
//int strlen_sort(const char* array)
//{
//
//    assert(array);
//    if(*array == '\0'){
//        return 0;
//    }
//    else {
//        return strlen_sort(++array)+1;
//    }
//}



//strlen函数指针相减实现
unsigned int strlen_sort( char* array)
{

    assert(array);
    char *left=array;
    char *right=array;
    while(*right != '\0')
    {
        right++;
    }
    return right-left;
}
int main()
{
    char arr[]="abcdfg";
    int ret=strlen_sort(arr);
    printf("%d",ret);
    return 0;
}
