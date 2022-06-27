//
// Created by 潘光伟 on 2022/3/23.
//
//单链表作业
#include "iostream"
#define OK 1
#define ERROR 0
typedef int Status;
typedef int ElemType;
//单链表的存储结构
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

//单链表初始化
Status InitList(LinkList &L)
{
    L=new LNode;
    L->next=NULL;
    return 0;
}


//单链表的取值
Status GetElem(LinkList L,int i,ElemType &e)
{
    p=L->next;j=1;
    while(p&&j<i)
    {
        p=p->next;
        ++j;
    }
    if(!p||j>i)return ERROR;
    e=p->data;
    return OK;
}

//单链表的按值查找
LNode *LocateElem(LinkList L,ElemType e)
{

    p=L->next;
    while(p && p->data!=e)
        p=p->next;
    return p;
}

//单链表的插入
Status ListInsert(LinkList &L,int i,ElemType e)
{
    p=L;j=0;
    while(p && (j<i-1))
    {p=p->next;j++;}
    if(!p||j>i-1)return ERROR;
    s=new LNode;
    s->data=e;
    s->next=p->next;
    p->next=s;
    return OK;
}

//单链表的删除
Status ListDelete(LinkList &L,int i)
{
    p=L;j=0;
    while((p->next) && (j<i-1))
    {p=p->next;++j;}
    if(!(p->next)||(j>i-1))return ERROR;
    q=p->next;
    p->next=q->next;
    delete q;
    return OK;
}



int main()
{

    int i = 0;
    int x = 0;
    SqList myList;

    //初始化单链表
    InitList(myList);

    //建立单链表
    for (i = 0; i < 5; i++)
        ListInsert(myList, '65', i);
    printf("建立后的顺序是:");
    for (i =0; i <myList.length; i++)
        printf("%d  ", myList.elem[i]);
    printf("\n");

    //取值
    GetElem(myList, 6, x);
    printf("取到的第3个数是:%d", x);
    printf("\n");

    //查找
    printf("在已有的顺序表里查找5，结果是: ");
    y = LocateElem(myList, 5);
    if (y == 0)
        printf("未找到！");
    else
        printf("找到第%d个数是5！", y);
    printf("\n");

    //删除
    ListDelete(myList, 4);
    printf("删除第4个数后的顺序表是:");
    for (i = 0; i <myList.length; i++)
        printf("%d  ", myList.elem[i]);
    return 0;
}
