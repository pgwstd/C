//
// Created by 潘光伟 on 2022/3/12.
//
//按位操作符的应用
//计算13的二进制位里面有多少个1
#include "stdio.h"
int main()
{
    int a=13;
    int count=0;
    //循环
    for (int i = 1; i < 32; ++i)
    {
        //判断
        if ((a % 2)==1)
        {
            //计算
            count++;
        }
        a=a>>1;
    }
    printf("%d",count);
    return 0;
}
