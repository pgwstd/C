//
// Created by 潘光伟 on 2022/2/27.
//
//打印9*9乘法口诀
#include "stdio.h"
int main()
{
    int i=0;
    int j=0;
    for(i=1;i<=9;i++){
        for (j = 1; j <=i ; j++) {
            printf("%dx%d=%-2d ",i,j,i*j);
        }
        printf("\n");//打印完一行记得换行
    }

    return 0;
}
