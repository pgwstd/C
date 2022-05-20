//
// Created by 潘光伟 on 2022/5/20.
//
#include "stdio.h"
#include "stdlib.h"
int main()
{
    int n=0;
    scanf("%d",&n);
    int* p=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; ++i) {
        *(p+i)=i;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ",p[i]);
    }
    return 0;
}
