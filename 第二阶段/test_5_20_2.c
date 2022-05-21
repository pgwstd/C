//
// Created by 潘光伟 on 2022/5/20.
//
//#include "stdio.h"
//#include "stdlib.h"
//#include "string.h"
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//#define MAXSIZE 100
//#define KeyType int
//#define InfoType int
//typedef int Status;
////定义结构体
//typedef struct{
//    KeyType key;  //键值
//    InfoType otherinfo; //其他信息
//}ElenType;
////定义队列类型
//typedef struct{
//    ElenType *R;
//    int lenght;
//}SStable;
//
////顺序表初始化
//Status MyList(SStable ST){
//    //分配空间
//    ST.R=(ElenType *)malloc(MAXSIZE*sizeof(ElenType));
//    if(!ST.R)
//        exit(OVERFLOW);
//    ST.lenght=0;
//    return OK;
//
//}
////顺序表插入
//Status AddArr(SStable ST,int i,ElenType e){
//    //插入
//    if(i<1||i>ST.lenght+1)
//        return ERROR;
//    if (ST.lenght==MAXSIZE)
//        return ERROR;
//    for(int j=ST.lenght-1;j>=i-1;j--)
//        ST.R[j+1]=ST.R[j];
//    ST.R[i-1]=e;
//    ST.lenght++;
//    return OK;
//
//}
////遍历数组
//void PrintArr(SStable ST){
//    for(int i=0;i<ST.lenght;i++)
//        printf("%d ",ST.R[i].key);
//    printf("\n");
//}
//
//
//
////哨兵顺序查找
//int SearchSeq(SStable ST,KeyType key){
//    ST.R[0].key = key;
//    for (int i = ST.lenght; ST.R[i].key != key ; --i) {
//        return i;
//    }
//}
////二分查找
//int SearchBin(SStable ST,KeyType key){
//    int left=1;
//    int right=ST.lenght;
//    while (left <= right){
//        int mid=(left+right)/2;
//        if (key < ST.R[mid].key){
//            right=mid-1;
//        }
//        else if (key > ST.R[mid].key){
//            left=mid+1;
//        } else{
//            return mid+1;
//        }
//    }
//}
//void menu(){
//    printf("************************************\n");
//    printf("***** 1. 增加数组    2. 遍历数组  *****\n");
//    printf("***** 3. 哨兵查找    4. 二分查找  *****\n");
//    printf("*****       0. 退出通讯录        *****\n");
//    printf("************************************\n");
//}
//enum str{
//    EXIT,
//    Add_Arr,
//    Print_Arr,
//    Search_Seq,
//    Search_Bin
//};
//int main()
//{
//   //初始化链表
//   SStable Initmylist;
//   MyList(Initmylist);
//   int input=0;
//    do {
//        menu();
//        printf("请选择:>");
//        scanf("%d",&input);
//        switch (input) {
//            //建立顺序表
//            case Add_Arr:
//                {
//                    ElenType e;
//                    printf("请输入键值:>");
//                    scanf("%d",&e.key);
//                    printf("请输入其他信息:>");
//                    scanf("%d",&e.otherinfo);
//                    AddArr(Initmylist,Initmylist.lenght+1,e);
//                }
//                break; // 退出
//            //遍历数组
//            case Print_Arr:
//                    PrintArr(Initmylist);
//                break;
//            //哨兵查找
//            case Search_Seq:
//                break;
//            //二分查找
//            case Search_Bin:
//                break;
//            case EXIT:
//                printf("退出查找！\n");
//                break;
//            default:
//                printf("输入有误，请重新输入！\n");
//                break;
//        }
//
//    } while (input);
//
//    return 0;
//}

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

//顺序表初始化
Status MyList(SStable ST){
    //分配空间
    ST.R=(ElenType *)malloc(MAXSIZE*sizeof(ElenType));
    if(!ST.R)
        exit(OVERFLOW);
    ST.lenght=0;
    return OK;

}
//顺序表插入
Status AddArr(SStable ST,int i,ElenType e){
    //插入
    if(i<1||i>ST.lenght+1)
        return ERROR;
    if (ST.lenght==MAXSIZE)
        return ERROR;
    for(int j=ST.lenght-1;j>=i-1;j--)
        ST.R[j+1]=ST.R[j];
    ST.R[i-1]=e;
    ST.lenght++;
    return OK;

}
//遍历数组
void PrintArr(SStable ST){
    for(int i=0;i<ST.lenght;i++)
        printf("%d ",ST.R[i].key);
    printf("\n");
}

//哨兵顺序查找
int SearchSeq(SStable ST,KeyType key){
    ST.R[0].key = key;
    for (int i = ST.lenght; ST.R[i].key != key ; --i) {
        return i;
    }
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
}
int main()
{
    SStable Initmylist;
    MyList(Initmylist);
}