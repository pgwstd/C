//
// Created by 潘光伟 on 2022/5/10.
//
//strlen函数实现
#include "stdio.h"
#include "assert.h"
int strlen_sort(const char* array)
{
    int count=0;
    assert(array);
    while (*array  != '\0'){
        count++;
        array++;
    }
    return count;
}
int main()
{
    char arr[]="abcdfg";
    int ret=strlen_sort(arr);
    printf("%d",ret);
    return 0;
}
