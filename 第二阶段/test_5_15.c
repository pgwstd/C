//
// Created by 潘光伟 on 2022/5/15.
//
#include "stdio.h"
struct book{
    char id[20];
    int pir;
    char pd[10];
}b1;
int main()
{
    printf("%d",sizeof(b1));
    return 0;
}
