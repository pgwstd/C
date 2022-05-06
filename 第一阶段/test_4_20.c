//
// Created by 潘光伟 on 2022/4/20.
//

#include<stdio.h>
//链栈结构体定义（十转二）
typedef struct{
    char data[30];  //字符类型数据域
    int index;  //定义头部
}stack;
void push(stack *s,int num){
    s->data[s->index++]=num;
}
int pop(stack *s){
    return s->data[--s->index];
}
int empty(stack *s){
    return s->index==0;
}
void DtoB(int num,stack *s) {
    if(num>=0) {
        while (num != 0) {
            push(s, num % 2);
            num /= 2;
        }
    }
    else
    {
        num=-num;
        while (num != 0) {
            push(s, num % 2);
            num /= 2;
        }
    }
}

//顺序栈定义
//typedef struct {
//    char *base; //尾指针
//    cahr *top;  //头指针
//    int stacksize; //长度
//}SqStack;
//void push(){
//
//}
//int pop(){
//
//}
//int  empty(){
//
//}
void DtoN(int num,stack *s) {
    if(num>=0) {
        while (num != 0) {
            push(s, num % 8);
            num /= 8;
        }
    }
    else{
        num=-num;
        while (num != 0) {
            push(s, num % 8);
            num /= 8;
        }
    }
}
void menu(){
    printf("********数制的转换********\n");
    printf("**** 1.十进制转换八进制 ****\n");
    printf("**** 2.十进制转换二进制 ****\n");
    printf("******* 0.退出系统 *******\n");
    printf("********** END *********\n");
}
int main(){
    stack s;
    int b=0;
    int input=0;
    s.index=0;

    do {
        menu();
        printf("请输入你的选择:\n");
        scanf("%d",&input);
        switch (input) {
            //八进制转换
            case 1:
                scanf("%d", &b);
                DtoN(b, &s); //这里是要转的数
                if(b>=0) {
                    while (!empty(&s)) {
                        printf("%d", pop(&s));
                    }
                    printf("\n");
                } else{
                    printf("-");
                    while (!empty(&s)) {
                        printf("%d", pop(&s));
                    }
                    printf("\n");
                }
                break;
                //二进制转换
            case 2:
                scanf("%d", &b);
                DtoB(b, &s); //这里是要转的数
                if(b>=0) {
                    while (!empty(&s)) {
                        printf("%d", pop(&s));
                    }
                    printf("\n");
                }
                else
                {
                    printf("-");
                    while (!empty(&s)) {
                        printf("%d", pop(&s));
                    }
                    printf("\n");
                }
                break;
            case 0:
                printf("退出程序！\n");
                break;
            default:
                printf("输入有误，请重新输入！\n");
                break;
        }
    }
    while (input);
    return 0;
}