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
#include "stdlib.h"

typedef int SqListData;  //定义数据类型
//定义链表结构
typedef struct node
{
    SqListData *data;  //数据域
    struct node *next;  //定义下一个指针以便指向下一个数据
} node;

//创建头结点
node *add_head()
{
    node *Head = (node *) malloc(sizeof(node));  //开辟链表空间
    if (Head == NULL)
    {
        return NULL;
    }
    Head->next = Head;
    return Head;
}

//数据尾插法
void push_node(node *Head, int data)
{
    node *new = (node *) malloc(sizeof(node));
    if (new == NULL)  //如果为空就证明表没能开辟成功
        return;
    new->data = data;  //节点成员赋值
    new->next = NULL;
    node *pT = NULL;
    for (pT = Head; pT->next != Head; pT = pT->next);  //将数据链接在一起
    new->next = pT->next;
    pT->next = new;

}

//节点交换
void swap_node(node *Head)
{
    node *p1 = Head->next;//第一个节点
    node *p2 = Head->next->next;//第二个节点
    //前两个节点交换
    p1->next = p2->next;
    p2->next = p1;
    Head->next = p2;

    node *pT = NULL;
    node *pT1 = NULL;
    node *pT2 = NULL;
    for (pT = Head; pT->next->next->next != Head; pT = pT->next);//找到倒数第三个节点
    for (pT1 = Head; pT1->next->next != Head; pT1 = pT1->next);//倒数第二个
    for (pT2 = Head; pT2->next != Head; pT2 = pT2->next);//最后一个节点
    //后两个节点交换
    pT1->next = Head;
    pT2->next = pT1;
    pT->next = pT2;
}

//遍历链表
void output(node *Head)
{
    if (Head->next == Head)
        return;
    node *pT = Head->next;
    while (pT != Head)
    {
        printf("%d ", pT->data);
        pT = pT->next;
    }
}

int main()
{
    node *Head = add_head();  //初始化链表
    int n = 0;
    printf("请输入你要定义的链表长度:");
    scanf("%d", &n);
    printf("请输入链表数据:\n");
    int arr[n];
    //将键盘键入的数据存放到数组中
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //将数据插入链表
    for (int j = 0; j < n; j++)
        push_node(Head, arr[j]);
    swap_node(Head);
    output(Head);
    return 0;
}