//
// Created by 潘光伟 on 2022/3/15.
//
//有问题的代码分析
//#include "stdio.h"
//int fun()
//{
//    static int b=1;
//    return ++b;
//}
//
//int main()
//{
//
//    int  count;
//    count=fun()-fun() * fun();//这个代码是有错的，fun调用的赋值时候，不能确定是那个先运算或赋值
//    printf("%d\n",count);
//    return 0;
//}
#include "stdio.h"
int main()
{
    int i=0;
    int count=(++i)+(++i)+(++i);//有问题的代码
    printf("%d\n",count);
    return 0;
}

