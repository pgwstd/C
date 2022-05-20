//
// Created by 潘光伟 on 2022/5/20.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define MaxSize 20
#define KeyType int
#define InfoType int
//定义key
typedef struct Key{
    KeyType key;
    KeyType key2;
    InfoType otherinfo;
}ElenType;
//线性表结构定义
typedef struct mylist{
    ElenType *R;
    int lenght;
}SStable;

//线性表初始化
void MyList(SStable *ST){
    ST->lenght=0; //指向第一个元素
    memset(ST->R, 0 ,sizeof(ST->R)); //内存设置函数，将开辟的空间全部置成0

}
//初始化数组
void AddArr(SStable *ST){
    if(ST->lenght == MaxSize){
        printf("数组已满，无法增加！\n");
        return;
    }
    printf("请输入元素:>");
    scanf("%d",&(ST->R));
    ST->lenght++;

}

//哨兵顺序查找
int Sear_Seq(SStable ST,KeyType key){
    ST.R[0].key = key;
    for (int i = ST.lenght; ST.R[i].key != key ; --i) {
        return i;
    }
}
//二分查找
int Search_Bin(SStable ST,KeyType key2){
    int left=1;
    int right=ST.lenght;
    while (left <= right){
        int mid=(left+right)/2;
        if (key2 < ST.R[mid].key2){
            right=mid-1;
        }
        else if (key2 > ST.R[mid].key2){
            left=mid+1;
        } else{
            return mid;
        }
    }
}
void menu(){
    printf("************************************\n");
    printf("***** 1. 监视哨查找  2. 折半查找  *****\n");
    printf("***** 3. 增加数组    4. 遍历数组  *****\n");
    printf("*****       0. 退出通讯录        *****\n");
    printf("************************************\n");
}

int main()
{
   //初始化链表
   SStable Initmylist;
   MyList(&Initmylist);
   int input=0;
    do {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch (input) {
            case 1:
                //初始化数组
                AddArr(&Initmylist);
                break;
                //打印数组
                //查找数组
        }

    } while (input);

    return 0;
}

