//
// Created by 潘光伟 on 2022/2/27.
//
//输入可规定的乘法口诀
#include "stdio.h"
void printf_table(int x)
{
    for (int i = 1; i <=x ; ++i) {
        for (int j = 1; j <=i ; ++j) {
            printf("%dx%d=%-2d ",i,j,i*j); //%-2d是让打出的结果占两位字符，让其美观
        }
        printf("\n");
    }
}
int main()
{
    int n=0;
    printf("请输入你要打出的乘法口诀:\n");
    scanf("%d",&n);
    printf_table(n);
    return 0;
}
