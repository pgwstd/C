//
// Created by 潘光伟 on 2022/6/24.
//
//顺序表练习
#include "stdio.h"
#include "stdlib.h"

//重定义数据类型
typedef int SLData;
//定义顺序表，动态开辟空间
typedef struct SeqList
{
    SLData *Data;  //数据存放位置
    int size;  //存储数据的个数
    int length;  //顺序表开辟的长度
} SeqList;

//初始化顺序表
void SeqInitList(SeqList *L)
{
    //把数据初始化为空值，把存储的个数和顺序表的长度初始为0
    L->Data = NULL;
    L->size = L->length = 0;
}

//插入数据
//尾插法
void SeqListPushBack(SeqList *L, SLData x)
{
    //判断顺序表空间是来否满
    if (L->size == L->length)
    {
        printf("空间已满无进行数据插入!");
        exit(-1);
    }
    //插入数据
    L->Data = x;
    L->size++;
}


//删除指定数据


//遍历顺序表
void SeqListPrint(SeqList *L)
{
    for (int i = 0; i < L->size; ++i)
    {
        printf("%d",L->Data[i]);
    }
    printf("\n");
}

//退出顺序表



int main()
{

    //初始化顺序表
    SeqList L;
    SeqInitList(&L);

    //插入数据
    SeqListPushBack(&L, 1);
    SeqListPushBack(&L, 2);
    SeqListPushBack(&L, 3);
    SeqListPushBack(&L, 4);

    //遍历顺序表
    SeqListPrint(&L);
    return 0;
}