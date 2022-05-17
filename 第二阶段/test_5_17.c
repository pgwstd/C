//
// Created by 潘光伟 on 2022/5/17.
//
//#include "stdio.h"
//#define 草 int main()
//#define 草了 printf
//#define 大草  {
//#define 小草  }
//#define 草草了 return 0
//#define 草草 ;
//#define 草左 (
//#define 草右 )
//草
//大草
//    草了 草左"我草了"草右 草草
//    草草了 草草
//小草


#include "stdio.h"
enum color{
    blue,
    red,
    green
};
int main()
{
    enum color c=blue;
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(enum color));
    printf("%d\n",blue);
    printf("%d\n",red);
    printf("%d\n",green);
    return 0;
}
