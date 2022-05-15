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
void* my_memmove(void* dest,const void* src,size_t num)
{
    assert(dest && src);
    void* ret=dest;
    if(dest < src){
        while (num--) {
            *(char *) dest = *(char *) src;
            dest = (char *) dest + 1;
            src = (char *) src + 1;
        }
    }
    else
    {
        while (num--) {
            *((char *) dest + num) = *((char *) src + num);
        }
    }
    return ret;
}
int main()
{

//    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
//    int arr2[10]={ 1,3 };
//      memcpy(arr1+2,arr1,20);
//    my_memcpy(arr1+2,arr1,20);
//    my_memmove(arr1+2,arr1,20);
//    for (int i = 0; i < 10; ++i) {
//        printf("%d\n",arr1[i]);
//    }
//    int ret=memcmp(arr1,arr2,8);
//    printf("%d",ret);
    int arr[10]={0};
    memset(arr,1,20);
    return 0;
}
