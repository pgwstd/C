//
// Created by 潘光伟 on 2022/5/12.
//
#include "stdio.h"
#include "string.h"
#include "assert.h"
int my_strstr(const char* str1,const char* str2)
{
    assert(str1 && str2);
        while (*str1 != '\0') {
            while (*str1 == *str2 && *str2 != '\0') {
                str1++;
                str2++;
            }
            if(*str2 == '\0') {
                return str1;
            }
            str1++;
        }
    return NULL;
}
int main()
{

    char arr1[]="abcdfgfsf";
    char arr2[]="abgg";
    char* ret=my_strstr(arr1,arr2);
    if(ret == NULL)
    {
        printf("没找到\n");
    }
    else
    {
        printf("找到了\n");
    }

    return 0;
}
