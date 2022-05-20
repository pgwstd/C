//
// Created by 潘光伟 on 2022/5/20.
//
//#include "stdio.h"
//#include "stdlib.h"
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int* p=(int*)malloc(n*sizeof(int));
//    for (int i = 0; i < n; ++i) {
//        *(p+i)=i;
//    }
//    for (int i = 0; i < n; ++i) {
//        printf("%d ",p[i]);
//    }
//    free(p); //释放空间(要和mallo成对出现)
//    p = NULL; //指针置为空
//    return 0;
//}
//#include "stdio.h"
//#include "stdlib.h"
//int main()
//{
//    int* p=(int*)(calloc(10,sizeof(int)));
//    if(p == NULL){
//        printf("分配失败!");
//        return 1;
//    }
//    for (int i = 0; i < 10; ++i) {
//        *(p+i)=i;
//    }
//    int* ptr=(int*) realloc(p,sizeof(int));
//    if(ptr != NULL)
//    {
//        p=ptr;
//    }
//    for (int i = 0; i < 20; ++i) {
//        printf("%d ",*(p+i));
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}
#include "stdio.h"
#include "stdlib.h"
int main()
{
    
    int* p=(int*) realloc(NULL,10*sizeof(int));
    if(p == NULL){
        printf("分配失败！");
        return 1;
    }
    for (int i = 0; i < 10; ++i) {
        *(p+i)=i;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ",p[i]);
    }
    free(p);
    p = NULL;

    return 0;
}