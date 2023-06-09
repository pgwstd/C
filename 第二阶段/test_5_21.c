//
// Created by 潘光伟 on 2022/5/21.
//
//使用设置监视哨的顺序查找在顺序表64,5,7,89,6,24里查找6，若找到，输出该元素在顺序表中的位置，否则输出提示语句“未找到”
//使用折半查找在顺序表4,15,17,29,56,84里查找50，若找到，输出该元素在顺序表中的位置，否则输出提示语句“未找到”
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
#define KeyType int
#define InfoType int
typedef int Status;
//定义结构体
typedef struct{
    KeyType key;  //键值
    InfoType otherinfo; //其他信息
}ElenType;
//定义队列类型
typedef struct{
    ElenType *R;
    int lenght;
}SStable;
//初始化顺序表
Status InitSStable(SStable *S){
    S->R = (ElenType *)calloc(MAXSIZE , sizeof(ElenType));  //全部初始化为0
    if(!S->R)
        exit(OVERFLOW);
    S->lenght = 0;
    return OK;
}
//插入元素
Status InsertSStable(SStable *S, ElenType e){
    S->R[S->lenght] = e;
    S->lenght++;
    return OK;
}
//哨兵顺序查找
int SearchSeq(SStable ST,KeyType key){
    ST.R[0].key = key;
    for (int i = ST.lenght; ST.R[i].key != key; --i);
        return i;
}
//二分查找
int SearchBin(SStable ST,KeyType key){
    int left=1;
    int right=ST.lenght;
    while (left <= right){
        int mid=(left+right)/2;
        if (key < ST.R[mid].key){
            right=mid-1;
        }
        else if (key > ST.R[mid].key){
            left=mid+1;
        } else{
            return mid+1;
        }
    }
    return -1;
}
int main() {
    SStable Initmylist;
    InitSStable(&Initmylist);
    int n=0;
    int key=0;
    printf("请定义你的顺序表1长度：\n");
    scanf("%d",&n);
    printf("请输入顺序表1的元素：\n");
     //从键盘输入顺序表
    for (int i = 0; i < n; ++i) {
        ElenType e;
        scanf("%d",&e.key);
        InsertSStable(&Initmylist,e);
    }
    //查找元素
    printf("请输入你要查找的元素:\n");
    scanf("%d",&key);
    printf("哨兵查找元素的结果是：");
    int ret=SearchSeq(Initmylist,key);
    if (ret == -1){
        printf("未找到\n");
    }else{
        printf("找到，位置为%d\n",ret);
    }
    free(Initmylist.R);
    Initmylist.R = NULL;


    printf("请定义你的顺序表2长度：\n");
    scanf("%d",&n);
    printf("请输入顺序表2的元素：\n");
    InitSStable(&Initmylist);
    //从键盘输入顺序表
    for (int i = 0; i < n; ++i) {
        ElenType e;
        scanf("%d",&e.key);
        InsertSStable(&Initmylist,e);
    }
    printf("请输入你要查找的元素:\n");
    scanf("%d",&key);
    int ret2=SearchBin(Initmylist,key);
    //查找元素
    printf("二分查找元素50的结果是：");
    if (ret2 == -1){
        printf("未找到\n");
    }else{
        printf("找到，位置为%d\n",ret2);
    }
}