//
// Created by 潘光伟 on 2022/5/19.
//
//方法的调用与声明
//做一个通讯录实现增、删、查、改、打印
#ifndef C_HOMEWORK_CALL_H
#define C_HOMEWORK_CALL_H
#include "stdio.h"
#include "string.h"
#define max_name 8
#define max_phe 13
#define max_addr 20
#define max_sex 3
#define maxsize 100

typedef struct call{
    char name[max_name];  //姓名
    int age;               //年龄
    char sex[max_sex];     //性别
    char phome[max_phe];  //电话
    char addr[max_addr];  //地址
}call;//重定义结构体名为call

typedef struct caller{
    call data[maxsize];
    int sz;
}caller; //通讯录数据存放

void mycall(caller *pc);  //初始化通讯录

void AddCall(caller *pc); //增加联系人

void DeleteCall(caller *pc);  //删除联系人

void  ModifyCall(caller *pc);  //修改联系人

void FindCall(caller *pc);   //查找联系人

void PintfCall(const caller *pc); //打印通讯录

void menu(); //菜单

#endif //C_HOMEWORK_CALL_H
