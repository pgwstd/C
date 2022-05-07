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
typedef int Status;  //定义返回类型的值
typedef struct LNode
{
    ElemType data;//定义数据域
    struct LNode *next;//结点的指针域

}LNode,*LinkList;
Status InitList(LinkList L)
{

}
int main()
{
    int n=0;
    printf("请输入你要定义的数组长度:\n");
    scanf("%d",&n);

    return 0;
}
