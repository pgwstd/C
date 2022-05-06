//
// Created by 潘光伟 on 2022/4/9.
//
//数据结构作业3
#include<stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;

typedef struct PNode                            //系数coed，指数expn
{
    float coef;
    int expn;
    struct PNode* next;
}PNode, * Polynomial;
/*创建多项式*/
void CreatePolyn(Polynomial& P, int n)
{ //输入n项的系数和指数，建立表示多项式的有序链表P
    P = new PNode;
    P->next = NULL;                             //建立一个带表头结点的单链表
    Polynomial s, pre, q;
    int i;
    for (i = 1; i <= n; ++i)                 //依次输入n个非零项
    {
        s = new PNode;                           //生成新结点
        cin >> s->coef >> s->expn;              //输入系数和指数;
        pre = P;                                //pre用于保存P的前驱，初值为头结点
        q = P->next;                            //q初始化，指向首元结点
        while (q && q->expn < s->expn)           //通过比较指数找到第一个大于输入项指数的项*q
        {
            pre = q;
            q = q->next;
        }                                       //while
        s->next = q;                             //将输入项s插入到q和其前驱节点pre之间;
        pre->next = s;
    }                                           //for?
}
/*多项式的相加*/
void  AddPoly(Polynomial& Pa, Polynomial& Pb)
{
    printf("SUM=");//多项式加法：Pa=Pa+Pb,两个多项式的结点构成“和多项式”
    Polynomial p1, p2, p3, r;
    int sum = 0;
    p1 = Pa->next; p2 = Pb->next;//p1和p2初值分别指向Pa和Pb的首元结点
    p3 = Pa;                        //p3指向多项式的当前结点，初值为Pa
    while (p1 && p2)                  //p1与p2均为非空
    {
        if (p1->expn == p2->expn)     //指数相等
        {
            sum = p1->coef + p2->coef;//sum保存两项的系数和
            if (sum != 0)               //当系数和不为0
            {
                p1->coef = sum;         //修改Pa当前结点的系数值为两项系数的和
                p3->next = p1;          //将修改后的Pa当前结点链在p3之后
                p3 = p1;                //p3指向p1
                p1 = p1->next;          //p1指向后一项
                r = p2;
                p2 = p2->next;            //p2指向后一项
                delete r;               //删除Pb当前结点
            }
            else//系数和为0时
            {
                r = p1; p1 = p1->next; delete r;//删除Pa当前结点，p1指向后一项
                r = p2; p2 = p2->next; delete r;//删除Pb当前结点，p2指向后一项
            }
        }
        else if (p1->expn, p2->expn)          //Pa当前结点的指数值小
        {
            p3->next = p1;                      //将p1链在p3之后
            p3 = p1;                            //p3指向p1
            p1 = p1->next;                      //p1指向后一项
        }
        else    // Pb当前结点的指数值小
        {
            p3->next = p2;                      //将p2链在p3之后
            p3 = p2;                            //p3指向p2
            p2 = p2->next;                      //p2指向后一项
        }
    }                                           //while
    p3->next = p1 ? p1 : p2;                    //插入非空多项式的剩余段
    delete Pb;      //释放Pb的头结点
}
// 输出多项式
void PrintfPolyn(Polynomial P) {
    Polynomial t;
    t = P->next;
    if (t == NULL)
    {
        cout << "0" << endl;
        return;
    }
    while (t->next) {
        if (t->expn != 0)
        {
            if (t->coef != 1 && t->coef != -1)
                cout << t->coef << "x";
            else if (t->coef == 1)
                cout << "x";
            else
                cout << "-x";
            if (t->next->coef > 0)
                cout << "^" << t->expn << "+";
            else
                cout << "^";
        }
        else
            cout << t->coef;
        t = t->next;
    }
    if (t->expn != 0)
    {
        if (t->coef != 1 && t->coef != -1)
            cout << t->coef << "x";
        else if (t->coef == 1)
            cout << "x";
        else
            cout << "-x";
        if (t->expn != 1)
            cout << "^" << t->expn;
    }
    else
        cout << t->coef;
    cout << endl;
}
void menu()
{
    printf("-----------------稀疏多项式的计算-----------------\n");
    printf("\n");
    printf("               1、建立并输出多项式\n"                );
    printf("                 2、多项式相加\n"                   );
    printf("                    3、退出\n"                     );
    printf("\n");
    printf("-----------------     End     -----------------\n");
}
/*主函数输出界面*/
int main()
{

    Polynomial p1, p2;
    int n1 = 0, n2 = 0;
    int m = 0;
    while (m != 3) {
        menu();
        scanf("%d",&m);
        switch (m) {
            case 1:
                printf("请输入多项式项数\n");
                scanf("%d", &n1);
                printf("请输入多项式各项的系数及指数\n");
                CreatePolyn(p1, n1);
                printf("p1=");
                PrintfPolyn(p1);
                break;
            case 2:
                printf("请输入p1的项数\n");
                scanf("%d", &n1);
                printf("请输入多项式各项的系数及指数\n");
                CreatePolyn(p1, n1);
                printf("p1=");
                PrintfPolyn(p1);
                printf("请输入p2的项数\n");
                scanf("%d", &n2);
                printf("请输入多项式各项的系数及指数\n");
                CreatePolyn(p2, n2);
                printf("p2=");
                PrintfPolyn(p2);
                AddPoly(p1, p2);
                PrintfPolyn(p1);
                break;
            case 3:
                printf("即将退出系统\n");
                break;
            default:
                printf("无该选项\n");
                break;
        }
        system("pause");
        system("cls");
    }
    return 0;
}