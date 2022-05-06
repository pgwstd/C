//
// Created by 潘光伟 on 2022/5/4.
//
#include "stdio.h"
#include "stdlib.h"
#define OK 1
#define ERROR 0
#define OVERFLOW -1
#define MAXSIZE 100
//定义顺序栈数据结构
typedef int SElemType;  //声明数据类型
typedef int Status;
typedef struct {
    SElemType *top;  //定义顺序栈头指针
    SElemType  *base;  //定义顺序栈尾指针
    int stacksize;  //定义这个顺序栈的容量
}SqStack;
//初奴化顺序栈
Status InitStack(SqStack &S){

    S.base=new SElemType[MAXSIZE];//开辟容量为MAXSIZE的数组空间
    if(!S.base)
    exit(OVERFLOW); //如果尾指针等于0的话，证明它分配空间失败了
    S.top=S.base;  //头指针初始化尾指针，证明它没有东西是空栈
    S.stacksize=MAXSIZE; //stacksize分配最大空间MAXSIZE
    return OK;
}
//数据入栈
Status Push(SqStack &S,SElemType e){
//插入元素为新的栈顶元素
   if (S.top -S.base == S.stacksize)
   return ERROR;//当头指针减去尾指针等于栈分配的最大空间时，证明栈已经满了
    *S.top++ = e;//如果栈没满就把元素e压入栈顶，栈顶指针加1
    return OK;
}
//数据出栈
Status Pop(SqStack &S,SElemType &e){
//删除s的浅顶元素,用返回其值
   if (S.base==S.top)
       return ERROR;//如果栈的头指针已经等于尾指针证明栈的元素已经出完了，栈空了
   e = *--S.top;//栈如果没空证明还有元素，头指针减减解引用把值赋给e
   return OK;
}
//十进制转换成八进制的实现
void DtoO(int N) {//对于任意一个非负十进制数，打印输出与其等值的八进制数
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
void DtoB(int N) {//对于任意一个非负十进制数，打印输出与其等值的八进制数
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
{
    int n,e,x;
    printf("输入一个十进制整数:");
    scanf("%d",&n);
    if(n>=0) x=n;
    else x=abs(n);
    printf("与它相等的八进制整数为:");
    if(n>=0) DtoO(x);
    else {
        printf("-");
        DtoO(x);
    }
    printf("\n");
    printf("与它相等的二进制整数为:");
    if(n>=0) DtoB(x);
    else {
        printf("-");
        DtoB(x);
    }
    return 0;
}
