//
// Created by 潘光伟 on 2022/5/18.
//
#include <stdio.h>

typedef struct {
    KeyType key;
    KeyType key2;
    InfoType otherinfo;
}ElenType;
typedef struct {
    ElenType *R;
    int lenght;
}SStable;
int Search_Seq(SStable ST,KeyType key){
    for (int i = ST.lenght; i >= 1 ; --i) {
        if (ST.R[i].key == key)  return i;
        return -1;
    }
}
int Sear_Seq(SStable ST,KeyType key){
    ST.R[0] == key;
    for (int i = ST.lenght; ST.R[i].key != key ; --i) {
        return i;
    }
}
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
int find_sort(int str[],int k,int sz)
{
    for (int i = 0; i < sz-1; ++i) {
        for (int j = 0; j < sz-1; ++j) {
            if (str[j] == k){
                return j+1;
            }
        }
    }
    return -1;
}


int find2_sort(int str[],int k,int sz)
{
    int left=0;
    int right=sz-1;
    while (left <= right){
        int mid=(left+right)/2;
        if (k < str[mid]){
            right=mid-1;
        } else if (k > str[mid]){
            left=mid+1;
        }
        else{
            return mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[]={64,5,7,89,6,24};
    int arr2[]={4,15,17,29,56,84};
    int len=sizeof(arr)/sizeof(arr[0]);
    int len2=sizeof(arr2)/sizeof(arr[0]);
    int ret=find_sort(arr,6,len);
    int ret2=find2_sort(arr2,50,len2);
    printf("-----使用设置监视哨的顺序查找-----\n");
    if (ret == -1){
        printf("未找到!!!");
    } else {
        printf("顺序查找6的下标是:%d\n", ret);
    }
    printf("----------使用折半查找----------\n");
    if (ret2 == -1){
        printf("未找到!!!");
    }
    else {
        printf("二分查找50的下标是:%d\n", ret2);
    }
    return 0;
}
