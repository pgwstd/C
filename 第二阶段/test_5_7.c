//
// Created by 潘光伟 on 2022/5/7.
//
//单向链表
//从键盘输入一个长度为 n 的数组
// 问你能否用这个数组组成一个链表
// 并顺序输出链表每个节点的值
#include "stdio.h"
#include "stdlib.h"
typedef int ElemType; //定义结构体的数据域的类型

//链表初始化
typedef struct LNode
{
    ElemType data;//定义数据域
    struct LNode *next;//结点的指针域

}LinkList; //定义结点类型

int main()
{
    int n=0; //定义一个变量用来存储链表的长度
    int t=0; //用来记录链表的长度
    LinkList *L,*p,*q; //定义三个指针
    printf("请输入你要定义的数组长度:\n");
    scanf("%d",&n); //输入数组长度
    p=L=(LinkList *) calloc(n,sizeof(LinkList));//动态分配连续空间
    for (int i = 0; i < n; ++i) { //循环输入数组
        scanf("%d",&t); //输入数组
        q=(LinkList *) calloc(n,sizeof(LinkList)); //动态分配连续空间
        q->data=t; //赋值
        q->next=NULL; //指针域为空
        p->next=q; //指针域指向q
        p=q; //p指向q
    }
    L=L->next; //L指向第一个结点
    for (int i = 0; i < n; ++i) { //循环输出链表
        printf("%d ",L->data); //输出链表
        L=L->next; //L指向下一个结点
    }
    return 0;
}
