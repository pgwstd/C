//
// Created by 潘光伟 on 2022/3/13.
//
#include "stdio.h"
int main()
{
    int a=0;
    int b=5;
    int c=4;
    int d=5;
//    int i=a++ && ++b && c++;
//    int i=a++ || ++b || c++;
//    int c=0;
//    if(a&&b)
//    {
//        printf("与运算！\n");
//    }
//    if(a||c){
//        printf("或运算！\n");
//    }
//    printf("%d\n%d\n%d\n%d\n",a,b,c,d);//1 6 4 5
   int n=a>b?1:-1;//三目操作符
    printf("%d\n",n);
    return 0;
}
