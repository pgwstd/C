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
//#include "stdio.h"
//#include "string.h"
//#include "assert.h"
//void my_strcat(char *dst,const char *src)
//{
//
//    assert(*dst && *src);
//    while (*dst != '\0'){
//        dst++;
//    }
//    while (*src != '\0'){
//        *dst++ = *src++;
//    }
//}
//int main()
//{
//    char arr[20]="abc ";
//    char arr2[]="efg";
//    my_strcat(arr,arr2);
//    printf("%s",arr);
//    return 0;
//}
//strcmp函数与strncmp函数实现
//#include "stdio.h"
//#include "string.h"
//int main()
//{

//    char *p="abc";
//    char *q="sdfafa";
//    if(strcmp(p,q) ){
//        printf(">\n");
//    }
//    else
//    {
//        printf("<=\n");
//    }
//    return 0;
//#include "stdio.h"
//#include "assert.h"
//int my_strcmp(const char* p,const char* q)
//{
//    assert(p && q);
//    while (*p == *q){
//        if(*p == '\0' && *q == '\0'){
//            return 0;
//        }
//            p++;
//            q++;
//    }
//    if(*p++ > *q++){
//        return 1;
//    }
//    else{
//        return -1;
//    }
//
//}
//int my_strcmp(const char* p,const char* q)
//{
//    assert(p && q);
//    while (*p == *q){
//        if(*p == '\0' && *q == '\0'){
//            return 0;
//        }
//        p++;
//        q++;
//    }
//    return *p-*q;
//
//}
//int main()
//{
//     char* p="asafasf";
//     char* q="aaee";
//     int ret=my_strcmp(p,q);
//     if(ret > 0 ){
//        printf("p > q\n");
//    }
//    else if(ret < 0)
//    {
//        printf("p < q\n");
//    }
//    else
//     {
//         printf("p = q\n");
//     }
//    return 0;
//
//}
//#include "stdio.h"
//#include "string.h"
//int main()
//{
//  char arr[20]="hello ";
//  char arr2[]="wrold";
//  strncat(arr,arr2,3);
//    printf("%s",arr);
//}
#include "stdio.h"
#include "string.h"
int main()
{
    char *p="abcdef";
    char *q="abcqwert";
//    int ret=strcmp(p,q);
    int ret= strncmp(p,q,3);
    printf("%d",ret);
    return 0;
}