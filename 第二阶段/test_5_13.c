//
// Created by 潘光伟 on 2022/5/13.
//
#include "stdio.h"
#include "stdlib.h"
#define OK 1
#define ERROR 0
#define OVERFLOW  -1
#define MAXQSIZE 100
typedef int Status;
//初始化结构体
typedef struct
{
    char name[20]; //声明姓名
    char sex;  //声明性别
}Person;

//初始队例结构体
typedef struct
{
    Person *base;
    int front;
    int rear;
}SqQueue;

SqQueue Man,Woman;
//循环队列的初始化
Status InitQueue(SqQueue &Q)
{
    Q.base = new Person[MAXQSIZE];
    if (!Q.base)
        exit(OVERFLOW);
    Q.front = Q.rear = 0;
    return OK;
}
//循环队列的入队
Status EnQueue(SqQueue &Q,Person e)
{
    if ((Q.rear + 1) % MAXQSIZE == Q.front)
        return ERROR;
    Q.base[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAXQSIZE;
    return OK;
}
//循环队列的出队
Status DeQueue(SqQueue &Q,Person e)
{
    if (Q.front == Q.rear)
       return ERROR;
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % MAXQSIZE;
    return OK;
}
//取循环队列的队头元素
Person GetHead(SqQueue Q) {
    if (Q.front != Q.rear)
        return Q.base[Q.front];
}

void DancePartner(Person dancer[], int num) {//结构数组dancer中存放跳舞的男女，num是跳舞的人数。
    InitQueue(Man); //男士队列初始化
    InitQueue(Woman); //女士队列初始化
    Person p;
    for (int i = 0; i < num; i++) //依次将跳舞者根据其性别入队
    {
        p = dancer[i];
        if (p.sex == 'F')
            EnQueue(Woman, p); //插入女队
        else
            EnQueue(Man, p); //插入男队
    }
    printf("舞伴配对名单：\n");
    printf(" 女     男\n");
    while (Woman.front != Woman.rear && Man.front != Man.rear){//依次输出男女舞伴的姓名
        DeQueue(Woman, p); //女士出队
        //输出出队女士姓名
        printf("%s",p.name);
        DeQueue(Man, p); //男士出队
        //输出出队男士姓名
        printf("%s\n",p.name);
    }
    if (Woman.front != Woman.rear) { //女士队列非空，输出队头女士的姓名
        p = GetHead(Woman); //取女士队头
        printf("下场的男士第一位匹配的舞伴是:  \n");
        printf("%s\n",p.name);
    } else if (Man.front != Man.rear) { //男士队列非空，输出队头男士的姓名
        p = GetHead(Man); //取男士队头
        printf("下场的女士第一位匹配的舞伴是: %s\n",p.name);

    }
}
int main()
{
    Person dancer[18]={{"金城武",'M'},
                       {"吴彦祖",'M'},
                       {"鄢雪棱",'F'},
                       {"王思聪",'M'},
                       {"高欣雅",'F'},
                       {"张甜源",'F'},
                       {"许丹丹",'F'},
                       {"古天乐",'M'},
                       {"周杰伦",'M'},
                       {"李敏浩",'M'},
                       {"李钟硕",'M'},
                       {"冉小溪",'F'},
                       {"周如意",'F'},
                       {"胡思琪",'F'},
                       {"蒋雅琪",'F'},
                       {"马小云",'M'},
                       {"张智霖",'M'},
                       {"王力宏",'M'}};
    DancePartner(dancer,18);

    return 0;
}
