//
// Created by 潘光伟 on 2022/4/27.
//
#include "stdio.h"
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("**************************\n");
	printf("**** 1. add    2. sub ****\n");
	printf("**** 3. mul    4. div ****\n");
	printf("****     0. exit      ****\n");
	printf("**************************\n");
}

int main()
{
	int input = 0;
	//计算器-计算整型变量的加、减、乘、除
	//a&b a^b a|b a>>b a<<b a>b

	do {
		menu();

		//pfArr就是函数指针数组
		//转移表 - 《C和指针》

		int (*pfArr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择:>");
		scanf("%d", &input);//2
		if (input >= 1 && input <= 4)
		{
			printf("请输入2个操作数>:");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else if(input == 0)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}



//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int Sub(int x, int y)
//{
//    return x - y;
//}
//
//int Mul(int x, int y)
//{
//    return x * y;
//}
//
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//void menu()
//{
//    printf("**************************\n");
//    printf("**** 1. add    2. sub ****\n");
//    printf("**** 3. mul    4. div ****\n");
//    printf("****     0. exit      ****\n");
//    printf("**************************\n");
//}
//
//int Calc(int (*pf)(int, int))
//{
//    int x = 0;
//    int y = 0;
//    printf("请输入2个操作数>:");
//    scanf("%d %d", &x, &y);
//    return pf(x, y);
//}
//
//int main()
//{
//    int input = 0;
//    //计算器-计算整型变量的加、减、乘、除
//    //a&b a^b a|b a>>b a<<b a>b
//
//    do {
//        menu();
//
//        int ret = 0;
//        printf("请选择:>");
//        scanf("%d", &input);
//
//        switch (input)
//        {
//            case 1:
//                ret = Calc(Add);
//                printf("ret = %d\n", ret);
//                break;
//            case 2:
//                ret = Calc(Sub);
//                printf("ret = %d\n", ret);
//                break;
//            case 3:
//                ret = Calc(Mul);//
//                printf("ret = %d\n", ret);
//                break;
//            case 4:
//                ret = Calc(Div);//
//                printf("ret = %d\n", ret);
//                break;
//            case 0:
//                printf("退出程序\n");
//                break;
//            default:
//                printf("选择错误，重新选择!\n");
//                break;
//        }
//
//    } while (input);
//    return 0;
//}




