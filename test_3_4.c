//
// Created by 潘光伟 on 2022/3/4.
//
//数组练习
#include "stdio.h"
//int main()
//{
//   int arr[3][4]={{1,2},{3,4},{5,6}};
//   int i=0;
//   int j=0;
//    for (int i = 0; i <3; ++i) {
//        for (int j=0;j<4;++j){
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//打印数组存储位置
//int main()
//{
//    int arr[3][4]={{1,2},{3,4},{5,6}};
//    int i=0;
//    int j=0;
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j <4 ; ++j) {
//            printf("arr[%d][%d]=%p\n ",i,j,arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//
//}
//用指针打印出数组中的存储
int main()
{
    int arr[3][4]={{1,2},{3,4},{5,6}};
     int  *p=arr;
    int i=0;
    for (int i = 0; i < 12; ++i) {
        printf("%d ",*p);
        p++;
    }
    return 0;
}

