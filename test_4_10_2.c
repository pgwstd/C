//
// Created by 潘光伟 on 2022/4/10.
//
//数据结构作业
#include "stdio.h"
#include "stdlib.h"
//创建多项式自定义结构
typedef struct PNode{
    int coef; //系数
    int exp; //指数
    struct PNode *next; //指向下一个结点的指针
}PNode,*Polynomial;
//输入n项的系数和指数，建立表示多项式的有序链表P
void CreatePoly(Polynomial *P,int n){
    int i;
    Polynomial p,q;
    p=(Polynomial)malloc(sizeof(PNode));
    p->coef=0;
    p->exp=0;
    p->next=NULL;
    *P=p;
    for(i=1;i<=n;i++){
        q=(Polynomial)malloc(sizeof(PNode));
        scanf("%d%d",&q->coef,&q->exp);
        q->next=NULL;
        p->next=q;
        p=q;
    }
}
//多项式的加法
void AddPoly(Polynomial *P,Polynomial Q){
    Polynomial p,q,r;
    p=*P;
    q=Q;
    r=(Polynomial)malloc(sizeof(PNode));
    r->coef=0;
    r->exp=0;
    r->next=NULL;
    while(p->next!=NULL&&q->next!=NULL){
        if(p->exp==q->exp){
            r->coef=p->coef+q->coef;
            r->exp=p->exp;
            r->next=p->next;
            p->next=r;
            p=p->next;
            q=q->next;
        }
        else if(p->exp>q->exp){
            r->coef=p->coef;
            r->exp=p->exp;
            r->next=p->next;
            p->next=r;
            p=p->next;
        }
        else{
            r->coef=q->coef;
            r->exp=q->exp;
            r->next=q->next;
            q->next=r;
            q=q->next;
        }
    }
    if(p->next==NULL){
        p->next=q->next;
    }
    if(q->next==NULL){
        q->next=p->next;
    }
}
//多项式的减法
void SubPoly(Polynomial *P,Polynomial Q){
    Polynomial p,q,r;
    p=*P;
    q=Q;
    r=(Polynomial)malloc(sizeof(PNode));
    r->coef=0;
    r->exp=0;
    r->next=NULL;
    while(p->next!=NULL&&q->next!=NULL){
        if(p->exp==q->exp){
            r->coef=p->coef-q->coef;
            r->exp=p->exp;
            r->next=p->next;
            p->next=r;
            p=p->next;
            q=q->next;
        }
        else if(p->exp>q->exp){
            r->coef=p->coef;
            r->exp=p->exp;
            r->next=p->next;
            p->next=r;
            p=p->next;
        }
        else{
            r->coef=-q->coef;
            r->exp=q->exp;
            r->next=q->next;
            q->next=r;
            q=q->next;
        }
    }
    if(p->next==NULL){
        p->next=q->next;
    }
    if(q->next==NULL){
        q->next=p->next;
    }
}

int main(){
    Polynomial P,Q;
    int n,m;
    scanf("%d%d",&n,&m);
    CreatePoly(&P,n);
    CreatePoly(&Q,m);
    AddPoly(&P,Q);
    SubPoly(&P,Q);
    //输出多项式
    P=P->next;
    while(P!=NULL){
        printf("%d %d\n",P->coef,P->exp);
        P=P->next;
    }
    return 0;
}
