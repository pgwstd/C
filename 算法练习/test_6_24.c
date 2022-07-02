//
// Created by 潘光伟 on 2022/6/24.
//
//顺序表练习
#include "stdio.h"
#include "stdlib.h"
#include "assert.h"

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

//自动扩容
void SeqListCheakLength(SeqList *L)
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
}

//插入数据
//尾插法
void SeqListPushBack(SeqList *L, SLData x)
{
//    //判断顺序表空间是来否满，如果满了就开辟空间(2倍的)
//    if (L->size == L->length)
//    {
//        //三目运算：如果等于0就开辟4个空间，不等于0就乘于2倍
//        int capacity = L->length == 0 ? 4 : L->length * 2;
//        SLData *tmp = (SLData *) realloc(L->Data, capacity * sizeof(SLData));
//        if (tmp == NULL)
//        {
//            printf("申请空间失败!");
//            //退出整个程序
//            exit(-1);
//        }
//        //把开辟好的空间给数据域和顺序表空间
//        L->Data = tmp;
//        L->length = capacity;
//    }
    SeqListCheakLength(L);
    //插入数据
    L->Data[L->size] = x;  //访问开始时的下标进行插入
    L->size++;
//    SeqListPushAssign(L, L->size, x);

}

//头插法
void SeqListPushFront(SeqList *L, SLData x)
{
//    //判断顺序表空间是来否满，如果满了就开辟空间(2倍的)
//    if (L->size == L->length)
//    {
//        //三目运算：如果等于0就开辟4个空间，不等于0就乘于2倍
//        int capacity = L->length == 0 ? 4 : L->length * 2;
//        SLData *tmp = (SLData *) realloc(L->Data, capacity * sizeof(SLData));
//        if (tmp == NULL)
//        {
//            printf("申请空间失败!");
//            //退出整个程序
//            exit(-1);
//        }
//        //把开辟好的空间给数据域和顺序表空间
//        L->Data = tmp;
//        L->length = capacity;
//    }
    SeqListCheakLength(L);
    //挪动数据
    int end = L->size - 1;
    while (end >= 0)
    {
        L->Data[end + 1] = L->Data[end];
        --end;
    }
    L->Data[0] = x;
    L->size++;
//    SeqListPushAssign(L, 0, x);
}

//在指定位置插入元素
void SeqListPushAssign(SeqList *L, int i, SLData x)
{
    assert(L->size >= i && i >= 0);
    SeqListCheakLength(L);
    int end = L->size - 1;
    while (end >= i)
    {
        L->Data[end + 1] = L->Data[end];
        end--;
    }
    L->Data[i] = x;
    L->size++;
}


//删除数据(尾删)
void SeqListPopBack(SeqList *L)
{
//  L->Data[L->size-1] = 0;
//    if (L->size == 0)
//    {
//        printf("数据域为空,不可删除！");
//        exit(-1);
//    }
    //使用断言，如果删多了为空时，直接报出错误
    assert(L->size);
    L->size--;
}


//删除数据(头删)
void SeqListPopFront(SeqList *L)
{
    assert(L->size);
    int start = 0;
    while (start < L->size - 1)
    {
        L->Data[start] = L->Data[start + 1];
        start++;
    }
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


//查找表中指定位置的元素
int SeqListGetElem(SeqList *L, int i)
{
    assert(L->size > i && i >= 0);
    if (i <= L->size || i > 0)
    {
        printf("位于表%d的位置的元素是:%d \n", i, L->Data[i - 1]);
    } else
    {
        return -1;
    }
}

//输出表中的元素个数
void SeqListLength(SeqList *L)
{
    assert(L->size);
    printf("表中还有%d个元素\n", L->size);
}

//查找表中是否有这个元素
int SeqListSearchElem(SeqList *L, SLData x)
{
    for (int i = 0; i < L->size; ++i)
    {
        if (L->Data[i] == x)
        {
            printf("表中存在%d这个元素,下标是:%d\n", x, i);
            return 0;
        }

    }
    return -1;
}

//删除指定位置的元素
void SeqListSiteElem(SeqList *L, int i)
{
    assert(L->size > i && i >= 0);
    if (i <= L->size || i >= 0)
    {
        i = i - 1;
        int start = i;
        while (start < L->size)
        {

            L->Data[start] = L->Data[start + 1];
            start++;
        }
        L->size--;
    } else
    {
        exit(-1);
    }

}

//删除指定元素
void SeqListAssignElem(SeqList *L, SLData x)
{
    assert(L->size);
    for (int i = 0; i < L->size; ++i)
    {
        if (L->Data[i] == x)
        {
            while (i < L->size)
            {
                L->Data[i] = L->Data[i + 1];
                i++;
            }
            L->size--;
        }

    }
}

//销毁顺序表
void SeqDestroyList(SeqList *L)
{
    free(L->Data);
    L->Data = NULL;
    L->size = L->length = 0;
}

//菜单
void menu()
{
    printf("----------1.头插----------------------\n");
    printf("----------2.尾插----------------------\n");
    printf("----------3.指定位置插入元素------------\n");
    printf("----------4.头删----------------------\n");
    printf("----------5.尾删----------------------\n");
    printf("----------6.删除指定位置元素-------------\n");
    printf("----------7.删除指定元素----------------\n");
    printf("----------8.输出表中的元素个数-----------\n");
    printf("----------9.查找表中指定位置的元素--------\n");
    printf("----------10.打印顺序表-----------------\n");
    printf("----------11.销毁顺序表-----------------\n");
}

int main()
{

    //初始化顺序表
    SeqList L;
    SeqInitList(&L);
//    int input = 0;
//    do
//    {
//        menu();
//    } while (input);
    //插入数据(尾插)
    SeqListPushBack(&L, 1);
    SeqListPushBack(&L, 2);
    SeqListPushBack(&L, 3);
    SeqListPushBack(&L, 4);
    SeqListPushBack(&L, 5);
    SeqListPrint(&L);

    //插入数据(头插)
    SeqListPushFront(&L, 1);
    SeqListPushFront(&L, 2);
    SeqListPushFront(&L, 3);
    SeqListPushFront(&L, 4);
    SeqListPushFront(&L, 5);
    SeqListPrint(&L);

    //在指定位置插入元素
    SeqListPushAssign(&L, 2, 90);
    SeqListPrint(&L);
    SeqListPushAssign(&L, 0, -1);
    SeqListPrint(&L);
    SeqListPushAssign(&L, 12, 12);
    SeqListPrint(&L);

    //删除数据(尾删)
    SeqListPopBack(&L);
    SeqListPopBack(&L);
    SeqListPopBack(&L);
    SeqListPopBack(&L);
    SeqListPrint(&L);

    //删除数据(头删)
    SeqListPopFront(&L);
    SeqListPopFront(&L);
    SeqListPopFront(&L);
    SeqListPopFront(&L);
    SeqListPopFront(&L);
    SeqListPopFront(&L);
    SeqListPrint(&L);

    //遍历顺序表
    SeqListPrint(&L);

    //返回顺序表中元素的个数
    SeqListLength(&L);

    //查找指定位置中的元素
    SeqListGetElem(&L, 2);

    //查找表中元素是否存在
    SeqListSearchElem(&L, 3);

    //删除指定位置的元素
    SeqListSiteElem(&L, 2);
    SeqListPrint(&L);

    //删除指定元素
    SeqListAssignElem(&L, 2);
    SeqListPrint(&L);

    //销毁顺序表
    SeqDestroyList(&L);
    return 0;
}