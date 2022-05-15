//
// Created by 潘光伟 on 2022/5/15.
//
//两种冒泡排序
#include "stdio.h"
//冒泡排序数组1
//void blblup_sort(int* str,int sz)
//{
//    int* left=str;
//    int* right=str+sz-1;
//    int tmp=0;
//    while (left < right)
//    {
//        if(*left > *right)  {
//            tmp=*left;
//            *left=*right;
//            *right=tmp;
//        }
//        left++;
//        right--;
//
//    }
//}
//冒泡排序数组2
void blblup_sort(int* str,int sz)
{
    int tmp=0;
    for (int i = 0; i < sz-1; ++i) {
        for (int j = 0; j < sz-1; ++j) {
            if(*(str+j) > *(str+j+1)){
                tmp=*(str+j);
                *(str+j)=*(str+j+1);
                *(str+j+1)=tmp;
            }
        }
    }

}
//打印数组
void print_sort(int* str,int sz)
{

    for (int i = 0; i < sz; ++i) {
        printf("%d ",*(str+i));
    }
}
int main()
{

    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    blblup_sort(arr,size);
    print_sort(arr,size);
    return 0;
}
