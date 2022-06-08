#include "stdlib.h"
#include "iostream"
#include "string"
#define ERROR -1
#define OK 1
#define MAXSIZE 100
using namespace std;

//定义二叉树结点类型
typedef  struct BiTNode
{
    char data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

//定义队列结点类型
typedef struct
{
    char *base;
    char *top;
    int stacksize;
}SqStack;

//定义栈结点类型
typedef struct
{
    BiTree *base;
    BiTree *top;
    int stacksize;
}BiTreeStack;

//初始化字符栈
void InitStack(SqStack &S)
{
    S.base = new char[MAXSIZE];
    if (!S.base) exit(ERROR);
    S.top = S.base;
    S.stacksize = MAXSIZE;
}

//初始化二叉树栈
void InitBiTreeStack(BiTreeStack &S)
{
    S.base = new BiTree[MAXSIZE];
    if (!S.base) exit(ERROR);
    S.top = S.base;
    S.stacksize = MAXSIZE;
}

//字符栈入栈
void Push(SqStack &S, char e)
{
    if (S.top - S.base == S.stacksize) return;
    *S.top = e;
    S.top++;
}

//树栈入栈
void PushBiTree(BiTreeStack &S, BiTree e)
{
    if (S.top - S.base == S.stacksize) return;
    *S.top = e;
    S.top++;
}

//字符栈出栈
void Pop(SqStack &S, char &e)
{
    if (S.top == S.base) return;
    e = *--S.top;
}

//树栈出栈
void PopBiTree(BiTreeStack &S, BiTree &e)
{
    if (S.top == S.base) return;
    e = *--S.top;
}

//字符栈得到栈顶元素
char GetTop(SqStack &S)
{
    if (S.top == S.base) exit(OK);
    return *(S.top - 1);
}


char Precede(char t1,char t2)
{
    char f;
    switch (t2)
    {
        case '+':
            if (t1 == '(' || t1 == '#')
                f = '<';
            else
                f = '>';
            break;
        case '-':
            if (t1 == '(' || t1 == '#')
                f = '<';
            else
                f = '>';
            break;
        case '*':
            if (t1 == '*' || t1 == '/' || t1 == ')')
                f = '>';
            else
                f = '<';
            break;
        case '/':
            if (t1 == '*' || t1 == '/' || t1 == ')')
                f = '>';
            else
                f = '<';
            break;
        case '(':
            if (t1 != ')')
                f = '<';
            break;
        case ')':
            if (t1 == '(')
                f = '=';
            else
                f = '>';
            break;
        case '#':
            if (t1 == '#')
                f = '=';
            else
                f = '>';
            break;
    }
    return f;
}

//判断是否是运算符
int In(char c)
{
    switch (c) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '(':
        case ')':
        case '#':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}

//进行运算的函数
int GetValue(char theta,int a,int b)
{
    int c;
    switch (theta) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
        default:
            break;
    }
    return c;
}

//简单的二叉树创立
void CreateExpTree(BiTree &T,BiTree a,BiTree b,char ch)
{
    T = new BiTNode;
    T->lchild = a;
    T->rchild = b;
    T->data = ch;
}

void InitExpTree(BiTree &T)
{
    SqStack OPTR;
    BiTreeStack EXPT;
    char ch,theta,x;
    BiTree a,b;
    InitStack(OPTR);
    Push(OPTR,'#');
    InitBiTreeStack(EXPT);
    cin>>ch;
    while(ch != '#' || GetTop(OPTR) != '#')
    {
        if (!In(ch))
        {
            CreateExpTree(T,NULL,NULL,ch);
            PushBiTree(EXPT,T);
            cin>>ch;
        }
        else
            switch (Precede(GetTop(OPTR),ch))
            {
                case '<':
                    Push(OPTR,ch);
                    cin>>ch;
                    break;
                case '=':
                    Pop(OPTR,x);
                    cin>>ch;
                    break;
                case '>':
                    Pop(OPTR,theta);
                    PopBiTree(EXPT,b);
                    PopBiTree(EXPT,a);
                    CreateExpTree(T,a,b,theta);
                    PushBiTree(EXPT,T);
                    break;
            }

    }
}

int EvaluateExpTree(BiTree T)
{
    int lvalue,rvalue;
    if (T->lchild==NULL && T->rchild==NULL)
        return T->data - '0';
    else
    {
        lvalue = EvaluateExpTree(T->lchild);
        rvalue = EvaluateExpTree(T->rchild);
        return GetValue(T->data,lvalue,rvalue);
    }

}

int main()
{
    cout<< "请输入算术表达式，并以#结束，中间计算过程要是1位数："<<endl;
    BiTree T;
    InitExpTree(T);
    cout<< "运算结果是："<<endl;
    cout<<EvaluateExpTree(T)<<endl;

}

