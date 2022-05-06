//
// Created by 潘光伟 on 2022/2/26.
//
//计算1/1-1/2+1/3-1/4.....+1/99-1/100
#include "stdio.h"
int main()
{
    int i=0;
    double j=0.0;
    int flat=1;
    for (int i = 1; i <=100 ; ++i) {
      j+=flat*1.0/i;
      flat=-flat;
    }
    printf("%lf\n",j);
    return 0;
}

