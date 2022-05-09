//
// Created by 潘光伟 on 2022/5/8.
//
//杨氏矩阵
#include "stdio.h"
//int find_sum(int array[3][3],int r,int c,int k)
//{
//    int x=0;
//    int y=c-1;
//    while (x<3 && y>=0)
//    {
//        if(array[x][y] < k)
//        {
//            x++;
//        }
//        else if(array[x][y] > k)
//        {
//            y--;
//        }
//        else
//        {
//            printf("下标是:%d %d ",x,y);
//            return 1;
//        }
//    }
//    return 0;
//}

int find_sum(int array[3][3],int* px,int* py,int k)
{
    int x=0;
    int y=*py-1;
    while (x<3 && y>=0)
    {
        if(array[x][y] < k)
        {
            x++;
        }
        else if(array[x][y] > k)
        {
            y--;
        }
        else
        {
            *px=x;
            *py=y;
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int k=7;
    int x=3;
    int y=3;
    int ret=find_sum(arr,&x,&y,k);//传址调用
    if(ret==1){
        printf("找到了\n");
        printf("下标是:%d %d ",x,y);//可以返回改变的值
    }
    else
    {
        printf("没找到\n");
    }
    return 0;
}
