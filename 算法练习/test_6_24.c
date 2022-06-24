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
    //判断顺序表空间是来否满，如果满了就开辟空间(2倍的)
    if (L->size == L->length)
    {
        //三目运算：如果等于0就开辟4个空间，不等于0就乘于2倍
        int capacity = L->length == 0 ? 4 : L->length * 2;
        SLData *tmp = (SLData *) realloc(L->Data, capacity * sizeof(SLData));
        if (tmp == NULL)
        {
            printf("申请空间失败!");
            //退出整个程序
            exit(-1);
        }
        //把开辟好的空间给数据域和顺序表空间
        L->Data = tmp;
        L->length = capacity;
    }
    //插入数据
    L->Data[L->size] = x;  //访问开始时的下标进行插入
    L->size++;


}


//删除数据(尾删)
void SeqListPopBack(SeqList *L)
{
//  L->Data[L->size-1] = 0;
  L->size--;
}

//遍历顺序表
void SeqListPrint(SeqList *L)
{
    for (int i = 0; i < L->size; ++i)
    {
        printf("%d ", L->Data[i]);
    }
    printf("\n");
}

//销毁顺序表
void SeqDestroyList(SeqList *L)
{
    free(L->Data);
    L->Data = NULL;
    L->size = L->length = 0;
}


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
    SeqListPushBack(&L, 5);
    //删除数据
    SeqListPopBack(&L);
    //遍历顺序表
    SeqListPrint(&L);
    //销毁顺序表
    SeqDestroyList(&L);
    return 0;
}