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
LinkList * LinkListOpen(LinkData x)
{
    LinkList *newnode = (LinkList*) malloc(sizeof(LinkList));
    //开辟失败处理
    if (newnode == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }
    //开辟成功处理
    newnode->Data = x;
    newnode->next = NULL;
    return  newnode;
}

//遍历链表
void LinkListPrint(LinkList *P)
{
    LinkList *cur = P;
    while (cur != NULL)
    {
        printf("%d ", cur->Data);
        cur = cur->next;
    }
    printf("\n");
}

//插入新节点(尾插)
void LinkListPushBack(LinkList **P, LinkData x)
{
    //新建一个节点
//    LinkList *newnode = (LinkList*) malloc(sizeof(LinkList));
//    newnode->Data = x;
//    newnode->next = NULL;

    LinkList *newnode=LinkListOpen(x);
    //如果是一开始没有结点就直接指向这个结点
    if (*P == NULL)
    {
        *P = newnode;
    }
    //如果本来就有结点就找尾结点
    else
    {
        //找到尾结点
        LinkList *tail = *P;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        //原本链表的最后一个指针指向新结点的头指针
        tail->next = newnode;
    }

}

void LinkListPushFront(LinkList **P, LinkData x)
{
    LinkList *newnode=LinkListOpen(x);
    newnode->next = *P;
    *P = newnode;
}

int main()
{
    //初始化链表为空
    LinkList *L = NULL;

    //插入数据(尾插)
    LinkListPushBack(&L, 1);
    LinkListPushBack(&L, 2);
    LinkListPushBack(&L, 3);
    LinkListPushBack(&L, 4);
    LinkListPushBack(&L, 5);

    //插入数据(尾插)
    LinkListPushFront(&L, 1);
    LinkListPushFront(&L, 2);
    LinkListPushFront(&L, 3);
    LinkListPushFront(&L, 4);
    LinkListPushFront(&L, 5);

    //尾删



    //头删

    //打印链表
    LinkListPrint(L);
    return 0;
}