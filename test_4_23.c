//
// Created by 潘光伟 on 2022/4/23.
//

#include "stdio.h"
void test(int** ptr)
{
    **ptr=2;
}
int main()
{

   int a=12;
   int *p=&a;
   int** ppa=&p;
   test(ppa);
   printf("%d", a);
   return 0;
}