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
    LinkData *Data;  //数据存放
    struct LinkList *next;  //下一个指针
    int size;

} LinkList;

int main()
{


    return 0;
}