//
// Created by 潘光伟 on 2022/3/25.
//

#include "stdio.h"
int main()
{
    const int* p=0;
    p=20;
    int* const b=0;
    *b=8;
    printf("%d\n",*p);
    printf("%d\n",*b);
    return 0;
}
