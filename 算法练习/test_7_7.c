////
//// Created by 潘光伟 on 2022/7/7.
////
////链表中的相邻间的两个内容交换
//#include "stdio.h"
//#include "stdlib.h"
//typedef int LinkData;
////定义链表
//typedef struct LinkList
//{
//    LinkData data;  //数据域
//    struct LinkList *next;  //指针域
//}LinkList;
//
////开辟空间
//LinkList * LinkListOpen(LinkData x)
//{
//    LinkList *newnode = (LinkList*) malloc(sizeof(LinkList));
//    //开辟失败处理
//    if (newnode == NULL)
//    {
//        printf("malloc fail\n");
//        exit(-1);
//    }
//    //开辟成功处理
//    newnode->Data = x;
//    newnode->next = NULL;
//    return  newnode;
//}
//
////插入新节点(尾插)
//void LinkListPushBack(LinkList **P, LinkData x)
//{
//    LinkList *newnode=LinkListOpen(x);
//    //如果是一开始没有结点就直接指向这个结点
//    if (*P == NULL)
//    {
//        *P = newnode;
//    }
//        //如果本来就有结点就找尾结点
//    else
//    {
//        //找到尾结点
//        LinkList *tail = *P;
//        while (tail->next != NULL)
//        {
//            tail = tail->next;
//        }
//        //原本链表的最后一个指针指向新结点的头指针
//        tail->next = newnode;
//    }
//
//}
////节点交换
//void swap_node(LinkList *Head)
//{
//    LinkList *p1 = Head->next;//第一个节点
//    LinkList *p2 = Head->next->next;//第二个节点
//    //前两个节点交换
//    p1->next = p2->next;
//    p2->next = p1;
//    Head->next = p2;
//
//    LinkList *pT = NULL;
//    LinkList *pT1 = NULL;
//    LinkList *pT2 = NULL;
//    for(pT = Head;pT->next->next->next != Head;pT = pT->next);//找到倒数第三个节点
//    for(pT1 = Head;pT1->next->next != Head;pT1 = pT1->next);//倒数第二个
//    for(pT2 = Head;pT2->next != Head;pT2 = pT2->next);//最后一个节点
//    //后两个节点交换
//    pT1->next = Head;
//    pT2->next = pT1;
//    pT->next = pT2;
//}
////遍历链表
//void LinkListPrint(LinkList *P)
//{
//    LinkList *cur = P;
//    while (cur != NULL)
//    {
//        printf("%d ", cur->Data);
//        cur = cur->next;
//    }
//    printf("\n");
//}
//
//
//
//
//int main()
//{
//
//    LinkList *Head =NULL;//头节点
//    int n,i,j;
//    scanf("%d",&n);
//    int arr[n];
//
//    //将键盘键入的数据存放到数组中
//    for(i = 0;i < n;i++)
//        scanf("%d",&arr[i]);
//
//    //将数据插入链表
//    for(j = 0;j < n;j++)
//        LinkListPushBack(Head, arr[j]);
//    swap_node(Head);
//    LinkListPrint(Head);
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//单向循环链表
typedef struct node
{
    int data;
    struct node *next;
}node;

//创建头节点
node *add_head()
{
    node *Head = (node *)malloc(sizeof(node));
    if(Head == NULL)
        return NULL;
    Head->next = Head;
    return Head;

}

//尾插法
void add_node(node *Head,int data)
{
    node *new = (node*)malloc(sizeof(node));
    if(new == NULL)
        return;
    //节点成员赋值
    new->data = data;
    new->next = NULL;
    //链接

    node *pT = NULL;
    for(pT = Head;pT->next != Head;pT = pT->next);

    new->next = pT->next;
    pT->next = new;
}

//节点交换
void swap_node(node *Head)
{
    node *p1 = Head->next;//第一个节点
    node *p2 = Head->next->next;//第二个节点
    //前两个节点交换
    p1->next = p2->next;
    p2->next = p1;
    Head->next = p2;

    node *pT = NULL;
    node *pT1 = NULL;
    node *pT2 = NULL;
    for(pT = Head;pT->next->next->next != Head;pT = pT->next);//找到倒数第三个节点
    for(pT1 = Head;pT1->next->next != Head;pT1 = pT1->next);//倒数第二个
    for(pT2 = Head;pT2->next != Head;pT2 = pT2->next);//最后一个节点
    //后两个节点交换
    pT1->next = Head;
    pT2->next = pT1;
    pT->next = pT2;
}
//输出链表
void output(node *Head)
{
    if(Head->next == Head)
        return;
    node *pT = Head->next;
    while(pT != Head)
    {
        printf("%d ",pT->data);
        pT = pT->next;
    }
}

int main(void)
{
    node *Head = add_head();//头节点
    int n,i,j;
    scanf("%d",&n);
    int arr[n];

    //将键盘键入的数据存放到数组中
    for(i = 0;i < n;i++)
        scanf("%d",&arr[i]);

    //将数据插入链表
    for(j = 0;j < n;j++)
        add_node(Head, arr[j]);
    swap_node(Head);
    output(Head);

    return 0;
}
