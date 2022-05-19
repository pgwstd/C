//
// Created by 潘光伟 on 2022/5/19.
//
//函数的实现
#include "call.h"

void menu() {
    printf("************************************\n");
    printf("***** 1. 增加联系人  2. 删除联系人 *****\n");
    printf("***** 3. 查找联系人  4. 修改联系人 *****\n");
    printf("***** 5. 打印联系人  0. 退出通讯录 *****\n");
    printf("************************************\n");
}

//查找联系人
static int find(caller *pc, char name[]) {
    for (int i = 0; i < pc->sz; ++i) {
        if (strcmp(pc->data[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

//初始化通讯录
void mycall(caller *pc) {
    pc->sz = 0;  //指向第一个元素
    memset(pc->data, 0, sizeof(pc->data));  //使用内存设置函数，使全部的内存空间置为0
}

//增加联系人
void AddCall(caller *pc) {
    if (pc->sz == maxsize) {
        printf("通讯录已满，不可增加联系人!\n");  //判断是否满
        return;
    } else {
        printf("请输入姓名:");
        scanf("%s", pc->data[pc->sz].name);
        printf("请输入年龄:");
        scanf("%d", &(pc->data[pc->sz].age));
        printf("请输入性别:");
        scanf("%s",pc->data[pc->sz].sex);
        printf("请输入电话:");
        scanf("%s", pc->data[pc->sz].phome);
        printf("请输入地址:");
        scanf("%s", pc->data[pc->sz].addr);
        pc->sz++;
        printf("增加成功！\n");
    }
}

//删除联系人
void DeleteCall(caller *pc) {
    char name[max_name] = {0};
    if (pc->sz == 0) {
        printf("通讯录为空，不可删除联系人!\n");  //判断是否为空
        return;
    } else {
        //输入要删除的姓名
        printf("请输入你要查找的联系人:\n");
        scanf("%s", name);
        int pos = find(pc, name);
        //找到或者没找到
        if (pos == -1) {
            printf("通讯录没有该人！\n");
            return;
        } else {
            for (int i = pos; i < pc->sz - 1; ++i) {
                pc->data[i] = pc->data[i + 1];
            }
            pc->sz--;
            printf("删除成功!\n");
        }
    }

}

//修改联系人
void ModifyCall(caller *pc) {
    char name[max_name] = {0};
    printf("请输入你要修改的联系人:\n");
    scanf("%s", name);
    int pos = find(pc, name);
    if (pos == -1) {
        printf("通讯录没有该人！\n");
        return;
    } else {
        printf("请输入姓名:");
        scanf("%s", pc->data[pos].name);
        printf("请输入年龄:");
        scanf("%d", &(pc->data[pos].age));
        printf("请输入性别:");
        scanf("%s", pc->data[pos].sex);
        printf("请输入电话:");
        scanf("%s", pc->data[pos].phome);
        printf("请输入地址:");
        scanf("%s", pc->data[pos].addr);
        printf("修改成功！\n");
    }
}

//查找联系人
void FindCall(caller *pc) {
    char name[max_name] = {0};
    printf("请输入你要查找的联系人:\n");
    scanf("%s", name);
    int pos = find(pc, name);
    if (pos == -1) {
        printf("通讯录没有该人！\n");
        return;
    } else {
        printf("%-20s\t %-20s\t %-20s\t %-20s\t %-20s\t\n", "姓名", "年龄", "性别", "电话", "地址");
        printf("%-20s\t %-18d\t %-18s\t %-18s\t %-20s\t\n",
               pc->data[pos].name,
               pc->data[pos].age,
               pc->data[pos].sex,
               pc->data[pos].phome,
               pc->data[pos].addr);
    }
}

//打印通讯录
void PintfCall(const caller *pc) {
    printf("%-20s\t %-20s\t %-20s\t %-20s\t %-20s\t\n", "姓名", "年龄", "性别", "电话", "地址");
    for (int i = 0; i < pc->sz; ++i) {
        printf("%-20s\t %-18d\t %-18s\t %-18s\t %-20s\t\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex,
               pc->data[i].phome, pc->data[i].addr);
    }
}