//
// Created by 潘光伟 on 2022/2/28.
//
//递归实现n个数的阶乘
#include "stdio.h"
int factral(int i)
{

    if(i<=0){
        return 1;
    }
    else
    {
        return i * factral(i - 1);
    }


}
int main()
{

    int n=0;
    printf("请输入你要阶乘的数:\n");
    scanf("%d",&n);
    int ret=factral(n);
    printf("%d",ret);
    return 0;
}
