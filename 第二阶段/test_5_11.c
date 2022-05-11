//
// Created by 潘光伟 on 2022/5/11.
//
//strcpy拷贝函数实现
//#include "stdio.h"
//#include "string.h"
//int main() {
//
//    char arr[] = {'a','b','c'};
//    char *p = "hello";
//    int len=sizeof(arr)/sizeof (arr[0]);
//    int len=strlen(arr);
//    strcpy(arr,p);
//    printf("%s",arr);
//    printf("%d",len);
//    return 0;
//}
//strcat追加函数实现
#include "stdio.h"
#include "string.h"
#include "assert.h"
void my_strcat(char *str,const char *str2)
{

    assert(*str && *str2);
    while (*str != '\0'){
        str++;
    }
    while (*str2 != '\0'){
        *str++ = *str2++;
    }
}
int main()
{
    char arr[20]="abc ";
    char arr2[]="efg";
    my_strcat(arr,arr2);
    printf("%s",arr);
    return 0;
}