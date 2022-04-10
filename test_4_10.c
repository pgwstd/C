//
// Created by 潘光伟 on 2022/4/10.
//
#include "stdio.h"
int main()
{
    int a[5]={1,2,3,4,5};
    int b[]={2,3,4,5,6};
    int c[5]={3,4,5,6,7};
    int* p[]={a,b,c};
    int i=0;
    int j=0;
    for (i = 0;  i< 3; i++) {
        for (j=0; j<5 ;j++){
//            printf("%d ",*(p[i]+j));
            printf("%d ",p[i][j]);

        }
        printf("\n");
    }
    return 0;
}
