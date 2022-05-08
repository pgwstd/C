//
// Created by 潘光伟 on 2022/5/7.
//
//单向链表
//从键盘输入一个长度为 n 的数组
// 问你能否用这个数组组成一个链表
// 并顺序输出链表每个节点的值
#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
typedef int ElemType; //定义结构体的数据域的类型
typedef int Status;  //定义返回类型的值
#define OK 1
#define ERROR ０
//链表初始化
typedef struct LNode
{
    ElemType data;//定义数据域
    struct LNode *next;//结点的指针域

}LNode,*LinkList;  //这个结构体有两个名称，一个是LNode,一个是指向这个结构体的指针类型*LinkList
//构造出单链表置成空
Status InitList(LinkList &L)
{
  L=new LNode;  //生成新的头结点并赋给L
  L->newt=NULL;  //将结点后的空间全部置为空
  return OK;
}
//单链表取值
Status GetElem()
{

}
int main()
{
    int n=0;
    LNode L;
    int* arr;
    printf("请输入你要定义的数组长度:\n");
    scanf("%d",&n);
    arr=(int*) malloc(n,sizeof(int));
    InitList(L);
    return 0;
}
