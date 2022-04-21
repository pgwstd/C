//
// Created by 潘光伟 on 2022/4/20.
//

#include<stdio.h>
typedef struct{
    char data[30];
    int index;
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
    while (num != 0) {
        push(s, num % 2);
        num /= 2;
    }
}
void DtoN(int num,stack *s) {
    while (num != 0) {
        push(s, num % 8);
        num /= 8;
    }
}
void menu(){
    printf("-----数制的转换----\n");
    printf("1.十进制转换八进制\n");
    printf("2.十进制转换二进制\n");
    printf("    3.退出系统\n");
    printf("-------END-------\n");
}
void main(){
    stack s;
    int b=0;
    int p=0;
    s.index=0;
    menu();
    printf("请输入你的选择:\n");
    scanf("%d",&p);
    while (p!=3) {
        switch (p) {
            case 1:
                scanf("%d", &b);
                DtoN(b, &s); //这里是要转的数
                while (!empty(&s)) {
                    printf("%d", pop(&s));
                }
                break;
            case 2:
                scanf("%d", &b);
                DtoB(b, &s); //这里是要转的数
                while (!empty(&s)) {
                    printf("%d", pop(&s));
                }
                break;
            case 3:
                printf("准备退出！！！");
                break;
            default:
                printf("输入有误！！！");
                break;
        }
    }
}