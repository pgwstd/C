//
// Created by 潘光伟 on 2022/3/9.
//
//数据结构作业
#include "stdio.h"
#include "stdlib.h"
#include "iostream"
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
typedef int Status;
typedef int ElemType;

typedef struct
{
    ElemType *elem;
    int length;
}SqList;

Status InitList(SqList &L)
{
  L.elem=new ElemType[MAXSIZE];
     if(!L.elem)
       exit(OVERFLOW);
   L.length=0;
    return OK;
}

Status GetElem(SqList L,int i,ElemType &e)
{
    if(i<1||i>L.length)
       return ERROR;
    e=L.elem[i-1];
       return OK;
}

int LocateElem(SqList L,ElemType e)
{
    for (int i = 0; i < L.length; ++i)
    {
        if(L.elem[i]==e)
            return i+1;
        return 0;
    }
}

Status ListInsert(SqList &L,int i,ElemType e)
{
     if((i<1)||(i>L.length+1))
        return ERROR;
      if(L.length==MAXSIZE)
         return ERROR;
    for(int j=L.length-1;j>=i-1;j--)
      L.elem[j+1]=L.elem[j];
     L.elem[i-1]=e;
      ++L.length;
       return OK;
}
Status ListDelete(SqList &L,int i)
{
     if((i<1)||(i>L.length))
        return ERROR;
     for(int j=i;j<=L.length;j++)
       L.elem[j-1]=L.elem[j];
           --L.length;
        return OK;
}
int main()
{
    int i=0;
    int x=0;
    int y=0;
    SqList myList;
    //初始化顺序表
    InitList(myList);
    //建立顺序表
    for (i = 1; i < 10; ++i)
    {
        ListInsert(myList,i,i);
        printf("建立后的顺序是:");
        for (i = 1; i <=myList.length ; i++)
        {
            GetElem(myList,i,x);
            printf("%d   ",x);
        }
        printf("\n");
        //取值
        GetElem(myList,6,x);
        printf("取到的第6个数是:    %d",x);
        printf("\n");
        //查找
        printf("在已有的顺序表里查找5，结果是: ");
        y=LocateElem(myList,5);
        if (y==0)
            printf("未找到！");
        else
            printf("找到第%d个数是5！",y);
        printf("\n");
        //删除
        ListDelete(myList,4);
        printf("删除第4个数后的顺序表是:");
        for (i = 1; i <=myList.length ; i++)
        {
            GetElem(myList,i,x);
            printf("%d   ",x);
        }
        printf("\n");
    }
}

