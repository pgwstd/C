//
// Created by 潘光伟 on 2022/3/28.
//
//交换两个数，但不能出现第三个变量
#include "stdio.h"
int main()
{
    int a=0;
    int b=0;
    printf("请输入两个数:\n");
    scanf("%d%d",&a,&b);
    printf("没交换之前这两个数:\n");
    printf("a=%d,b=%d\n",a,b);
    printf("交换之后这两个数是:\n");
    a=a ^ b;
    b=a ^ b; // a^b^b==a
    a=a ^ b; //a^a^b==b
    printf("a=%d,b=%d\n",a,b);
    return 0;


}
