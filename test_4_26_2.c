//
// Created by 潘光伟 on 2022/4/26.
//
//整数的计算机计算
//加、减、乘、除
//'|' '^' '&'
#include "stdio.h"
void menu()
{
    printf("***********************\n");
    printf("***** 1.Add  2.Sub *****\n");
    printf("***** 1.Mul  2.Div *****\n");
    printf("*****    0.exti    *****\n");
    printf("***********************\n");

}
int Add(int x,int y)
{
    return x+y;
}
int Sub(int x,int y)
{
    return x-y;
}
int Mul(int x,int y)
{
    return x*y;
}
int Div(int x,int y)
{
    return x/y;
}
int main()
{
    int input=0;
    int x=0;
    int y=0;
    int ret=0;
    do {
        menu();
        printf("请输入你的选择:\n");
        scanf("%d",&input);
        switch (input) {
            case 1:
                printf("请输入两个数据:\n");
                scanf("%d %d",&x,&y);
                ret=Add(x,y);
                printf("ret=%d\n",ret);
                break;
            case 2:
                printf("请输入两个数据:\n");
                scanf("%d %d",&x,&y);
                ret=Sub(x,y);
                printf("ret=%d\n",ret);
                break;
            case 3:
                printf("请输入两个数据:\n");
                scanf("%d %d",&x,&y);
                ret=Mul(x,y);
                printf("ret=%d\n",ret);
                break;
            case 4:
                printf("请输入两个数据:\n");
                scanf("%d %d",&x,&y);
                ret=Div(x,y);
                printf("ret=%d\n",ret);
                break;
            case 0:
                printf("退出程序！\n");
                break;
            default:
                printf("输入有误，请重新输入!\n");
                break;

        }
    } while (input);
    return 0;
}
