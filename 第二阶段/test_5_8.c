//
// Created by 潘光伟 on 2022/5/8.
//
//试把一个长度为 n 的数组转换成链表并把链表前两个节点交换位置和把链表最后两个节点交换位置。
//第一行输入一个正整数 n 表示数组的长度
//第二行输入 n 个正整数，表示数组中各个元素的值
//把数组转换成链表后输出交换位置后的链表
#include "stdio.h"
#include "stdlib.h"
int main()
{
    int* arr;
    int n=0;
    printf("请输入你要定义的数组长度:\n");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));

    return 0;
}
