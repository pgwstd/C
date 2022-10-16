//
// Created by 潘光伟 on 2022/10/16.
//
#include <stdio.h>
#include <stdlib.h>

//定义链表类型
struct LNode
{
    int data;                                             //结点的数据域
    struct LNode *next;                                   //结点的指针域
};


//创建逆序链表
struct LNode *CreatList(int n)
{
    struct LNode *L, *p;
    printf("请输入逆序创建链表的元素的个数:\n");           //确定链表元素的个数
    scanf("%d", &n);
    L = (struct LNode *) malloc(sizeof(struct LNode));
    L->next = NULL;                                       //建立一个带头结点的单链表
    printf("请输入逆序链表元素:\n");
    while (n--)
    {                                            //逆序位输入n个元素的数值
        p = (struct LNode *) malloc(sizeof(struct LNode));
        scanf("%d", &p->data);                             //输入指定元素个数的链表元素数值
        p->next = L->next;
        L->next = p;
    }
    printf("输出链表中的元素:\n");                         //直接输出所创建的逆序链表
    while (p != NULL)
    {
        if (p->next == NULL)
            printf("%d\n", p->data);
        else
            printf("%d\t", p->data);
        p = p->next;
    }
    return L;
}


//转置链表内元素并输出
void InvertList(struct LNode *L)
{
    struct LNode *p, *q, *r, *s, *t;
    r = (struct LNode *) malloc(sizeof(struct LNode));
    s = (struct LNode *) malloc(sizeof(struct LNode));
    r->next = NULL;                                         //建立一个带头结点新链表
    q = L->next;                                            //q指向链表第一个元素
    s->data = q->data;
    s->next = NULL;
    r->next = s;
    while (q->next != NULL)
    {
        q = q->next;
        p = (struct LNode *) malloc(sizeof(struct LNode));
        p->data = q->data;
        p->next = s;
        r->next = p;
        s = p;
    }
    printf("输出转置后的链表:\n");
    t = r->next;
    while (t != NULL)                                        //直接输出转置后的链表
    {
        printf("%d\t", t->data);
        t = t->next;
    }
    printf("\n");
}


//主函数
int main()
{
    int n;
    struct LNode *L;
    L = CreatList(n);
    InvertList(L);
}

