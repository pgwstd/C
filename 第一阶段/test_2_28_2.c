//
// Created by 潘光伟 on 2022/2/28.
//
//输入一个数，打印出这个数是每一位
#include "stdio.h"
void printf_number(int i)
{
    if(i>9)
        printf_number(i / 10);
        printf("%d ", i % 10);

}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf_number(n);
    return 0;
}
