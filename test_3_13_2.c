//
// Created by 潘光伟 on 2022/3/13.
//
//结构体的练习
#include "stdio.h"
//书本的结构体
struct book
{
    char book_name[20];//书名定义
    char id_book[10];//书本的ID
    int preic;//价格定义
};
int main()
{


    struct book a={"西游戏","c1998020211",198};
    printf("书名:%s\n",a.book_name);
    printf("书本的ID:%s\n",a.id_book);
    printf("价格:%d\n",a.preic);
    return 0;
}

