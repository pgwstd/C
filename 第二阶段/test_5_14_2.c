//
// Created by 潘光伟 on 2022/5/14.
//
//memcpy内存函数实现
#include "stdio.h"
#include "string.h"
#include "assert.h"
void* my_memcpy(void* dest,const void* src,size_t num)
{
    assert(dest && src);
    void* ret=dest;
    while (num--){
        *(char*)dest=*(char*)src;
        dest=(char*)dest+1;
        src=(char*)src+1;
    }
    return ret;
}
int main()
{

    char arr1[10]={1,2,3,4,5,6,7,8,9,10};
    char arr2[10]={ 0 };
    my_memcpy(arr2,arr1,10);
    return 0;
}
