//
// Created by 潘光伟 on 2022/6/25.
//
//链表
#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

typedef int LinkData;

//定义链表
typedef struct LinkList
{
    LinkData Data;  //数据存放
    struct LinkList *next;  //下一个指针
} LinkList;

//开辟空间
void LinkListOpen(LinkList *P)
{

}

//遍历链表
void LinkListPrint(LinkList *P)
{
    LinkList *cur = P;
}

//插入新节点
void LinkListPushBack(LinkList *P,LinkData x)
{

}
int main()
{
   //初始化链表
    LinkList L;
    LinkListOpen(&L);

    return 0;
}