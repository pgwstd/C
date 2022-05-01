//
// Created by 潘光伟 on 2022/4/27.
//
#include "iostream"
#include "stdio.h"
#include "stdlib.h"
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -1
#define MAXSIZE 100
typedef int Status;
typedef char SElemType;

typedef struct {
    SElemType *base;
    SElemType *top;
    int stacksize;
}SqStack;

Status InitStack(SqStack &S)
{
    S.base=new SElemType[MAXSIZE];
    if (!S.base) exit(OVERFLOW);
    S.top=S.base;
    S.stacksize=MAXSIZE;
    return OK;
}
//算法3.2顺序栈的入栈
Status Push(SqStack &S,SElemType e) {
    //插入元素为新的栈顶元素
    if (S.top -S.base == S.stacksize)
        return ERROR;//栈满
    *S.top++ = e;//元素e压入栈顶，栈顶指针加1
    return OK;
}
//算法3.3顺序栈的出栈
Status Pop(SqStack &S,SElemType &e){
//刚除s的浅顶元素,用返回其值
    if (S.base==S.top)
        return ERROR;//栈空
    e = *--S.top;//栈顶指针藏，将栈顶元素赋给e
    return OK;
}
//算法3.20数制的转换（顺序栈实现）
void conversion1(int N) {//对于任意一个非负十进制数，打印输出与其等值的八进制数
    int e;
    SqStack S;
    InitStack(S);//初始化空找s
    while(N)//当N非零时，循环
    {
        Push(S, N % 8);//把N与8求余得到的八进荆制数压入栈s
        N = N / 8;//N更新为N与8的商
    }
    while(S.base!=S.top)//当栈s非空时，循环
    {
        Pop(S,e);//弹出栈顶元素e
        printf("%d",e);//输出e
    }
}
/**链栈实现十进整数到二进整数的转换***/
typedef struct StackNode {
    SElemType data;
    struct StackNode *next;
}StackNode,*LinkStack;
Status InitStack(LinkStack &S) {
    S=NULL;
    return OK;
}
Status Push(LinkStack &S,SElemType e){
    StackNode *p;
    p = new StackNode;
    p->data = e;
    p->next=S;
    S = p;
    return OK;
}
Status Pop(LinkStack &S,SElemType &e) {
    StackNode *p;
    if (S == NULL)
        return ERROR;
    e=S->data;
    p = S;
    S=S->next;
    delete p;
    return OK;
}
//算法3.20数制的转换（链浅实现）
void conversion2(int N) {//对于任意一个非负十进制数，打印输出与其等值的八进制数
    int e;
    LinkStack S;
    InitStack(S);//初始化空找s
    while (N) { //当非零时，循环
        Push(S, N % 2);//把与8求余得到的八进刺数压入栈s
        N = N / 2;//N更新为N与8的商
    }
    while(S)//当栈s非空时，循环
    {
        Pop(S,e); //弹出浅顶元素e
        printf("%d", e);//输入出e
    }
}
int main()
{//对于输入的任意一个非负十进制数，打印输出与其等值的八进制数或二进制数
    int n,e,x;
    printf("输入一个十进制整数:");
    scanf("%d",&n);
    if(n>=0) x=n;
    else x=abs(n);
    printf("与它相等的八进制整数为:");
    if(n>=0) conversion1(x);
    else {
        printf("-");
        conversion1(x);
    }
    printf("\n");
    printf("与它相等的二进制整数为:");
    if(n>=0) conversion2(x);
    else {
        printf("-");
        conversion2(x);
    }
    return 0;
}

