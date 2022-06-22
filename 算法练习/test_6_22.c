//
// Created by 潘光伟 on 2022/6/22.
//
//单链表交换
//输入描述：
//第一行输入一个正整数 n 表示数组的长度
//第二行输入 n 个正整数，表示数组中各个元素的值
//输出描述：
//把数组转换成链表后输出交换位置后的链表
#include "stdio.h"
typedef int data;
//定义链表结构
typedef  struct sqList{
    data * a;
    int size;
    int len;
}SL;
int main()
{

    int n=0;
    printf("请输入你要定义的链表长度:");
    scanf("%d",&n);
    //初始化链表
    SL sl;

    return 0;
}