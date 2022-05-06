//
// Created by 潘光伟 on 2022/3/28.
//
//输入两个数，判断这两个二进制位里不同的数有几个，如22 33 有5个
#include "stdio.h"
int number(int p)
{
    int count=0;
    while (p){
        p=p & (p-1);
        count++;

    }
    return count;
}
int main()
{
    int n=0;
    int m=0;
    int count=0;
    printf("请输入两个数:\n");
    scanf("%d%d",&n,&m);
//    for (int i = 0; i < 32; ++i) {   // 一个整型数字只有32个位，所以循环32次
//         if((n>>i & 1)  !=  (m>>i &1 )){
//             count++;
//         }
//    }
    int ret=n ^ m; //按位异或就可以得出这两个数二进制们不相同的个数
    count=number(ret); //在通过用求ret里面有多少个1就可以得到这两个数的不相同的个数
    printf("%d",count);
    return 0;
}