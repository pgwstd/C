//
// Created by 潘光伟 on 2022/5/12.
//
#include "stdio.h"
#include "string.h"
#include "assert.h"
char* my_strstr(const char* str1,const char* str2)
{
    assert(str1 && str2);
    const char* cp=str1;
        while (*cp != '\0') {
            str1=cp;
            while ((*str1 == *str2) && *str1 != '\0') {
                str1++;
                str2++;
            }
            if(*str2 == '\0') {
                return cp;
            }
            cp++;
        }
    return NULL;
}
int main()
{

    char arr1[]="abcdfgfsf";
    char arr2[]="bcd";
    char* ret=my_strstr(arr1,arr2);
    if(ret == NULL)
    {
        printf("没找到\n");
    }
    else
    {
        printf("找到了:%s\n",ret);
    }

    return 0;
}
