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
    int price;//价格定义
};
int main()
{


    struct book a={"西游戏","c1998020211",198};
//    printf("书名:%s\n",a.book_name);
//    printf("书本的ID:%s\n",a.id_book);
//    printf("价格:%d\n",a.price);
    //也可以通过指针的形式来访问结构体
    struct book * pd=&a;
    printf("书名:%s\n",(*pd).book_name);
    printf("书本的ID:%s\n",(*pd).id_book);
    printf("价格:%d\n",(*pd).price);
    //用指针输出的时候可以直接—>指向结构体的里的函数,这样更加方便，如下：
    printf("输出的时候可以直接—>指向结构体\n");
    printf("书名:%s\n",pd->book_name);
    printf("书本的ID:%s\n",pd->id_book);
    printf("价格:%d\n",pd->price);
    return 0;
}

