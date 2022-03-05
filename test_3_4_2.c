//
// Created by 潘光伟 on 2022/3/4.
//
//冒泡排序一个正序数组
#include "stdio.h"
void  blbl_sort(int arr[],int size){
    int i=0;
    int j=0;
    int flag=1;
    for(int i = 0; i < size-1;++i) {
        for (int j = 0; j < size-1-i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int tep = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tep;
                flag =0;//如果交换了位置，就把flag改成0；
            }
        }
        if(flag==1){
            break;   //当这个数组左边比右边小的时候就不要往下排序直接跳出，节约时间
        }
    }
}
int main()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    blbl_sort(arr,size);
    return 0;
}
