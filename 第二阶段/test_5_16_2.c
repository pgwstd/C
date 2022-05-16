//
// Created by 潘光伟 on 2022/5/16.
//
//macro->offsetof宏
#include "stdio.h"
#include "stddef.h"
struct S{
    char c1;
    int i;
    char c2;
};
int main()
{
    printf("%d\n",offsetof(struct S,c1));
    printf("%d\n",offsetof(struct S,i));
    printf("%d\n",offsetof(struct S,c2));
    return 0;
}
