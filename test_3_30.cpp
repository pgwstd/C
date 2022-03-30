//
// Created by 潘光伟 on 2022/3/23.
//
//单链表作业
#include "iostream"
#include "stdio.h"
#include "stdlib.h"
using namespace std;
#define OK 1
#define ERROR 0
typedef int Status;
typedef char ElemType;

//单链表的存储结构
typedef struct LNode
{
    ElemType data;  //定义表中的数据域
    struct LNode *next;  //定义表中的指针域
}LNode,*LinkList;  //LinkList为指向结构体LNode的指针类型

//单链表初始化
Status InitList(LinkList &L)
{

    L=new LNode;//生成新节点作为头结点，用头指针L指向头指向头结点
    L->next=NULL;//将next设置为空，初始化的长度应该是零
    return OK;
}


//单链表的取值
Status GetElem(LinkList L,int i,ElemType &e)
{
    LinkList p;
    int j;
    p=L->next;j=1; //初始化，p指向的首元节点，计算器j初值赋为1
    while(j<i && p) //顺链域向后扫描，直到p为空或p指向第i个元素
    {
        p=p->next;  //p指向下一个节点
        ++j;  //计数器加1
    }
    if(!p || j>i)
        return ERROR; //如果i的值不合法就返回0
    e=p->data;  //取第i个节点的数据域
    return OK;
}

//单链表的按值查找
int LocateElem(LinkList L,ElemType e)
{
    LinkList p;//初始化一个头指针p
    int j=0;
    p=L->next; j=1;//p指针指向首元节点
    while(p && p->data!=e)  //顺链域向后扫，直到p为空或指结点的数据域等于e
    {p=p->next;j++;}  //p指向下一个指点
    if(p) return j;
    else return 0;  //查找成功，返回地址p，如果查找失败就返回null
}

//单链表的插入
Status ListInsert(LinkList &L,int  i,ElemType e)
{

    LinkList p,s;
    int j;
    p=L;j=0;
    while(p && (j<i-1))
    {p=p->next;j++;}  //查找第i-1的结点，p指向该结点
    if(!p||j>i-1)return ERROR;  //i>n+1或者i<1
    s=new LNode;  //生成新结点*s
    s->data=e;  //将结点*s的数据域置为e
    s->next=p->next;  //将结点*s的指针域指向结点ai
    p->next=s;  //将结点的*p的指针域指向结点*s
    return OK;
}

//单链表的删除
Status ListDelete(LinkList &L,int i)
{
    LinkList p,q;
    int j;
    p=L;j=0;
    while((p->next) && (j<i-1)) //查找第i-1个结点，p指向该结点
    {p=p->next;++j;}
    if(!(p->next)||(j>i-1))return ERROR;  //当i>n或i<1时，删除位置不合理
    q=p->next; //临时保存被删除的结点地址以备释放
    p->next=q->next;  //改变删除结点前驱结点的指针域
    delete q;  //释放删除结点的空间
    return OK;
}


int main()
{
    int i;
    int y;
    char x;
    LinkList myList;
    LNode *p;


    //初始化单链表
    InitList(myList);

    //建立单链表,插入A~E
    ListInsert(myList, 1, 'A');
    ListInsert(myList, 2, 'B');
    ListInsert(myList, 3, 'C');
    ListInsert(myList, 4, 'D');
    ListInsert(myList, 5, 'E');
    printf("遍历一下单链表:\n");
    {
        LinkList q;
        q=myList->next;
        for(q->next;q;q=q->next)
            printf("%c   ",q->data);
    }
    printf("\n");


    //取值
    GetElem(myList, 3, x);
    printf("取到的第3个数是:%c", x);
    printf("\n");

    //查找
    printf("单链表中查找B元素是: ");
    y = LocateElem(myList, 'B');
    if (y == 0)
        printf("未找到！");
    else
        printf("找到第%d个数是B！", y);
    printf("\n");

    //删除
    ListDelete(myList, 4);
    printf("删除第4个数后的单链表是:\n");
    {
        LinkList q;
        q=myList->next;
        for(q->next;q;q=q->next)
            printf("%c   ",q->data);
    }
    return 0;
}

