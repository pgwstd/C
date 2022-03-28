//
// Created by 潘光伟 on 2022/3/28.
//
//输入一个数计算它的二进制位有多少个1
#include "stdio.h"
int number(unsigned int p) {
    int count=0;
    while (p){   //15--00001111-->15%2=1最后一位的1，15/2=7  7%2=1倒数第二位的1，以些类推
       if(p%2==1) {
           count++;
       }
        p/=2;
    }

    return count;
//    int count = 0;
//    for (int i = 0; i < 32; ++i) {
//        if ((p>>i) & 1 == 1)
//            count++;
//
//    }
//    return count;
}
int main()
{
    int n=0;
    int ret=0;
    printf("请输入一个数:\n");
    scanf("%d",&n);
    ret=number(n);
    printf("它的二进制位有%d个1:\n",ret);
    return 0;
}
