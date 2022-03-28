//
// Created by 潘光伟 on 2022/3/28.
//
//输入一个数打印出这个两个二进制位的奇数位和偶数位上的数
#include "stdio.h"
int main()
{

    int n=0;
    int i=0;
    int j=0;
    printf("请输入一个数:\n");
    scanf("%d",&n);
    for (i = 31; i >= 1; i-=2) {   // 15 ——>  00000000 00000000 00000000 00001111
        printf("%d",((n>>i) & 1));
    }
    printf("\n");
    for (i = 30; i >= 0; i-=2) {   // 15 ——>  00000000 00000000 00000000 00001111
        printf("%d",((n>>i) & 1));
    }
    return 0;
}
