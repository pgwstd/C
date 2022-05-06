//
// Created by 潘光伟 on 2022/4/9.
//
//数据结构作业3
#include<stdio.h>
#include <iostream>
#include<stdlib.h>
#include "math.h"
using namespace std;
typedef struct PNode
{
    float coef;//系数coed，指数expn
    int expn;
    struct PNode *next;
} PNode, *Polynomial;

/*创建多项式*/
void CreatePolyn(Polynomial &P, int n) {
    P = new PNode;
    P->next = NULL;
    PNode *s, *pre, *q;
    int i;
    for (i = 1; i <= n; ++i)
    {
        s = new PNode;
        scanf("%f%d",&(s->coef),&(s->expn));
        pre = P;
        q = P->next;
        while (q && q->expn < s->expn)
        {
            pre = q;
            q = q->next;
        }
        s->next = q;
        pre->next = s;
    }
}
/*多项式的相加*/
void AddPoly(Polynomial &Pa, Polynomial &Pb) {
    printf("SUM=");
    PNode  *p1, *p2, *p3, *r;
    float sum = 0;
    p1 = Pa->next;
    p2 = Pb->next;
    p3 = Pa;
    while (p1 && p2)
    {
        if (p1->expn < p2->expn)
        {
            p3->next = p1;
            p3 = p1;
            p1 = p1->next;
        }
        else if (p1->expn > p2->expn)
        {
            p3->next = p2;
            p3 = p2;
            p2 = p2->next;
        } else {
            sum = p1->coef + p2->coef;
            //判断是否等于0
            if (fabs(sum) < 1e-6) {
                r = p1;
                p1 = p1->next;
                delete r;
                r = p2;
                p2 = p2->next;
                delete r;
            } else{
                p1->coef=sum;
                p3->next=p1;p3=p1;p1=p1->next;
                r=p2;p2=p2->next;delete r;
            }
        }
    }
    p3->next = p1 ? p1 : p2;
    delete Pb;
}

/*多项式的相减*/
void SubPoly(Polynomial &Pa, Polynomial &Pb) {
    printf("SUB=");
    PNode  *p1, *p2, *p3, *r;
    float sub = 0;
    p1 = Pa->next;
    p2 = Pb->next;
    p3 = Pa;
    while (p1 && p2)
    {
        if (p1->expn < p2->expn)
        {
            p3->next = p1;
            p3 = p1;
            p1 = p1->next;
        }
        else if (p1->expn > p2->expn)
        {
            p3->next = p2;
            p3 = p2;
            p2 = p2->next;
        } else {
            sub = p1->coef - p2->coef;
            if (fabs(sub) < 0) {
                r = p1;
                p1 = p1->next;
                delete r;
                r = p2;
                p2 = p2->next;
                delete r;
            } else {
                p1->coef = sub;
                p3->next = p1;
                p3 = p1;
                p1 = p1->next;
                r = p2;
                p2 = p2->next;
                delete r;
            }
        }
    }
    p3->next = p1 ? p1 : p2;
    delete Pb;
}

// 输出多项式
void printfPolyn(Polynomial P) {
    PNode *p = P->next;
    if (p->expn == 0)
        printf("%f",p->coef);
    else if (p->expn == 1)
        printf("%fx",p->coef);
    else
        printf("%fx^%d",p->coef,p->expn);
    p = p->next;
    while (p) {
        printf(" ");
        if (p->coef > 0)
            printf("+");
        if (p->expn == 1)
            printf("%fx",p->coef);
        else
            printf("%fx^%d",p->coef,p->expn);
        p = p->next;
    }
    printf("\n");
}

void menu() {
    printf("-----------------稀疏多项式的计算-----------------\n");
    printf("\n");
    printf("               1、建立并输出多项式\n");
    printf("                 2、多项式相加\n");
    printf("                 3、多项式相减\n");
    printf("                    4、退出\n");
    printf("\n");
    printf("-----------------     End     -----------------\n");
}

/*主函数输出界面*/
int main() {

    Polynomial p1, p2;
    int n1 = 0, n2 = 0;
    int m = 0;
    menu();
    scanf("%d", &m);

    switch (m) {
        case 1:
            printf("请输入多项式项数\n");
            scanf("%d", &n1);
            printf("请输入多项式各项的系数及指数\n");
            CreatePolyn(p1, n1);
            printf("p1=");
            printfPolyn(p1);
            break;
        case 2:
            printf("请输入p1的项数\n");
            scanf("%d", &n1);
            printf("请输入多项式各项的系数及指数\n");
            CreatePolyn(p1, n1);
            printf("p1=");
            printfPolyn(p1);
            printf("请输入p2的项数\n");
            scanf("%d", &n2);
            printf("请输入多项式各项的系数及指数\n");
            CreatePolyn(p2, n2);
            printf("p2=");
            printfPolyn(p2);
            AddPoly(p1, p2);
            printfPolyn(p1);
            break;
        case 3:
            printf("请输入p1的项数\n");
            scanf("%d", &n1);
            printf("请输入多项式各项的系数及指数\n");
            CreatePolyn(p1, n1);
            printf("p1=");
            printfPolyn(p1);
            printf("请输入p2的项数\n");
            scanf("%d", &n2);
            printf("请输入多项式各项的系数及指数\n");
            CreatePolyn(p2, n2);
            printf("p2=");
            printfPolyn(p2);
            SubPoly(p1, p2);
            printfPolyn(p1);
            break;
        case 4:
            printf("即将退出系统！\n");
            break;
        default:
            printf("无该选项,请重新输入！\n");
            break;
    }
    return 0;
}