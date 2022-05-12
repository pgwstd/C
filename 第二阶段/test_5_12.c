//
// Created by 潘光伟 on 2022/5/12.
//
#include "stdio.h"
#include "string.h"
#include "assert.h"
int my_strstr(const char* str1,const char* str2)
{
    assert(str1 && str2);
    if(*str1 != '\0') {
        while (*str1 != '\0') {
            while (*str1 == *str2 && *str2 != '\0') {
                str1++;
                str2++;
            }
            str1++;
        }
        return 1;
    } else
    {
        return 0;
    }

}
int main()
{

    char arr1[]="abcdfgfsf";
    char arr2[]="bcd";
    int ret=my_strstr(arr1,arr2);
    if(ret == 0)
    {
        printf("没找到\n");
    }
    else
    {
        printf("找到了\n");
    }

    return 0;
}
