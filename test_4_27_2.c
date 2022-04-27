//
// Created by 潘光伟 on 2022/4/26.
//
//整数的计算机计算
//加、减、乘、除
//'|' '^' '&'
//#include "stdio.h"
//void menu()
//{
//    printf("***********************\n");
//    printf("***** 1.相加  2.相减 *****\n");
//    printf("***** 3.相乘  4.相除 *****\n");
//    printf("***** 5.相或  6.相与 *****\n");
//    printf("*****    7.异或    *****\n");
//    printf("*****    0.退出    *****\n");
//    printf("***********************\n");
//
//}
//int Add(int x,int y)
//{
//    return x+y;
//}
//int Sub(int x,int y)
//{
//    return x-y;
//}
//int Mul(int x,int y)
//{
//    return x*y;
//}
//int Div(int x,int y)
//{
//    return x/y;
//}
//int Or(int x,int y)
//{
//    return x|y;
//}
//int And(int x,int y)
//{
//    return x&y;
//}
//int Xor(int x,int y)
//{
//    return x^y;
//}
//
//int main()
//{
//    int input=0;
//    int x=0;
//    int y=0;
//    int ret=0;
//    do {
//        menu();
//        printf("请输入你的选择:\n");
//        scanf("%d",&input);
//        switch (input) {
//            case 1:
//                printf("请输入两个数据:\n");
//                scanf("%d %d",&x,&y);
//                ret=Add(x,y);
//                printf("ret=%d\n",ret);
//                break;
//            case 2:
//                printf("请输入两个数据:\n");
//                scanf("%d %d",&x,&y);
//                ret=Sub(x,y);
//                printf("ret=%d\n",ret);
//                break;
//            case 3:
//                printf("请输入两个数据:\n");
//                scanf("%d %d",&x,&y);
//                ret=Mul(x,y);
//                printf("ret=%d\n",ret);
//                break;
//            case 4:
//                printf("请输入两个数据:\n");
//                scanf("%d %d",&x,&y);
//                ret=Div(x,y);
//                printf("ret=%d\n",ret);
//                break;
//            case 5:
//                printf("请输入两个数据:\n");
//                scanf("%d %d",&x,&y);
//                ret=Or(x,y);
//                printf("ret=%d\n",ret);
//                break;
//            case 6:
//                printf("请输入两个数据:\n");
//                scanf("%d %d",&x,&y);
//                ret=And(x,y);
//                printf("ret=%d\n",ret);
//                break;
//            case 7:
//                printf("请输入两个数据:\n");
//                scanf("%d %d",&x,&y);
//                ret=Xor(x,y);
//                printf("ret=%d\n",ret);
//                break;
//            case 0:
//                printf("退出程序！\n");
//                break;
//            default:
//                printf("输入有误，请重新输入!\n");
//                break;
//
//        }
//    } while (input);
//    return 0;
//}


//#include "stdio.h"
//void menu()
//{
//    printf("***********************\n");
//    printf("***** 1.相加  2.相减 *****\n");
//    printf("***** 3.相乘  4.相除 *****\n");
//    printf("***** 5.相或  6.相与 *****\n");
//    printf("*****    7.异或    *****\n");
//    printf("*****    0.退出    *****\n");
//    printf("***********************\n");
//
//}
//int Add(int x,int y)
//{
//    return x+y;
//}
//int Sub(int x,int y)
//{
//    return x-y;
//}
//int Mul(int x,int y)
//{
//    return x*y;
//}
//int Div(int x,int y)
//{
//    return x/y;
//}
//int Or(int x,int y)
//{
//    return x|y;
//}
//int And(int x,int y)
//{
//    return x&y;
//}
//int Xor(int x,int y)
//{
//    return x^y;
//}
//int calk(int (*ptr)(int, int))
//{
//    int x=0;
//    int y=0;
//    printf("请输入两个数据:\n");
//    scanf("%d %d", &x, &y);
//    return ptr(x,y);
//}
//int main()
//{
//    int input=0;
//    int x=0;
//    int y=0;
//    int ret=0;
//    do {
//        menu();
//        int (*ptr[8])(int, int)={NULL,Add, Sub, Mul,Div,Or,And, Xor};
//        printf("请输入你的选择:\n");
//        scanf("%d",&input);
//        if(input>=1 && input<=7) {
//            printf("请输入两个数据:\n");
//            scanf("%d %d", &x, &y);
//            ret = (ptr[input])(x, y);
//            printf("ret=%d\n", ret);
//        }
//        else if(input==0){
//            printf("退出程序!");
//            break;
//        }
//        else
//        {
//            printf("输入错误，请重新输入！");
//        }
//    } while (input);
//    return 0;
//}


#include "stdio.h"
void menu()
{
    printf("***********************\n");
    printf("***** 1.相加  2.相减 *****\n");
    printf("***** 3.相乘  4.相除 *****\n");
    printf("***** 5.相或  6.相与 *****\n");
    printf("*****    7.异或    *****\n");
    printf("*****    0.退出    *****\n");
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
int Or(int x,int y)
{
    return x|y;
}
int And(int x,int y)
{
    return x&y;
}
int Xor(int x,int y)
{
    return x^y;
}
int cakl(int (*ptr)(int, int))
{
    int x=0;
    int y=0;
    printf("请输入两个数据:\n");
    scanf("%d %d", &x, &y);
    return ptr(x,y);
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
                ret=cakl(Add);
                printf("ret=%d\n",ret);
                break;
            case 2:
                ret=cakl(Sub);
                printf("ret=%d\n",ret);
                break;
            case 3:
                ret=cakl(Mul);
                printf("ret=%d\n",ret);
                break;
            case 4:
                ret=cakl(Div);
                printf("ret=%d\n",ret);
                break;
            case 5:
                ret=cakl(Or);
                printf("ret=%d\n",ret);
                break;
            case 6:
                ret=cakl(Add);
                printf("ret=%d\n",ret);
                break;
            case 7:
                ret=cakl(Xor);
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