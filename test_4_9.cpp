//
// Created by 潘光伟 on 2022/4/9.
//
//数据结构作业3
#include "stdio.h"
#include "stdlib.h"
//单链表多项式的结构
typedef struct polynomial
{
    int n;
    node *head;
}polynomial;
//创建多项式
polynomial *create_polynomial(int n)
{
    polynomial *p=(polynomial *)malloc(sizeof(polynomial));
    p->n=n;
    p->head=(node *)malloc(sizeof(node));
    p->head->next=NULL;
    return p;
}
//创建多项式的系数
node *create_coefficient(int n)
{
    node *p=(node *)malloc(sizeof(node));
    p->data=n;
    p->next=NULL;
    return p;
}
//创建多项式的指数
node *create_exponent(int n)
{
    node *p=(node *)malloc(sizeof(node));
    p->data=n;
    p->next=NULL;
    return p;
}
//插入多项式的系数
void insert_coefficient(polynomial *p,int n)
{
    node *q=create_coefficient(n);
    node *r=p->head;
    while(r->next!=NULL)
    {
        r=r->next;
    }
    r->next=q;
}
//插入多项式的指数
void insert_exponent(polynomial *p,int n)
{
    node *q=create_exponent(n);
    node *r=p->head;
    while(r->next!=NULL)
    {
        r=r->next;
    }
    r->next=q;
}
//求多项式的值
int get_value(polynomial *p,int x)
{
    node *r=p->head;
    int sum=0;
    while(r->next!=NULL)
    {
        sum=sum+r->data*pow(x,r->next->data);
        r=r->next;
    }
    return sum;
}
//求多项式的导数
polynomial *get_derivative(polynomial *p)
{
    polynomial *q=create_polynomial(p->n-1);
    node *r=p->head;
    node *s=q->head;
    while(r->next!=NULL)
    {
        insert_coefficient(q,r->data*r->next->data);
        insert_exponent(q,r->next->data-1);
        r=r->next;
        s=s->next;
    }
    return q;
}
//求多项式的和
polynomial *get_sum(polynomial *p,polynomial *q)
{
    polynomial *r=create_polynomial(p->n>q->n?p->n:q->n);
    node *s=p->head;
    node *t=q->head;
    while(s->next!=NULL)
    {
        while(t->next!=NULL)
        {
            insert_coefficient(r,s->data+t->data);
            insert_exponent(r,s->next->data>t->next->data?s->next->data:t->next->data);
            t=t->next;
        }
        s=s->next;
    }
    return r;
}
//求多项式的差
polynomial *get_difference(polynomial *p,polynomial *q)
{
    polynomial *r=create_polynomial(p->n>q->n?p->n:q->n);
    node *s=p->head;
    node *t=q->head;
    while(s->next!=NULL)
    {
        while(t->next!=NULL)
        {
            insert_coefficient(r,s->data-t->data);
            insert_exponent(r,s->next->data>t->next->data?s->next->data:t->next->data);
            t=t->next;
        }
        s=s->next;
    }
    return r;
}
int main()
{
    polynomial *p=create_polynomial(3);
    insert_coefficient(p,1);
    insert_exponent(p,0);
    insert_coefficient(p,2);
    insert_exponent(p,1);
    insert_coefficient(p,3);
    insert_exponent(p,2);
    polynomial *q=create_polynomial(2);
    insert_coefficient(q,1);
    insert_exponent(q,0);
    insert_coefficient(q,2);
    insert_exponent(q,1);
    printf("%d\n",get_value(p,2));
    polynomial *r=get_derivative(p);
    return 0;
}
