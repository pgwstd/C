//
// Created by 潘光伟 on 2022/3/28.
//
//写出输入一个数判断是不是2的n次方
#include "stdio.h"
void isTwo(int k)
{

    if(k & (k-1)==0) {   //当一个数二进制们与上比自己少1的一个数时，如果结果刚好是0，那它就是2的n次方
        printf("这个数是2的n次方\n");
    }
        printf("这个数不是\n");
}
int main()
{
    int n=0;
    perror("请输入一个数:\n");
    scanf("%d",&n);
    isTwo(n);
    return 0;
}
