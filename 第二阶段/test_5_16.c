//
// Created by 潘光伟 on 2022/5/16.
//
//实现二分查找的两种实现
#include "stdio.h"
int find_sort(int ptr[], int k, int sz) {
    int left = 0;
    int right = sz - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (k < ptr[mid]) {
            right = mid - 1;
        } else if (k > ptr[mid]) {
            left = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}

int find_sort2(int *ptr, int k, int sz) {
    int left = 0;
    int right = sz - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (k < *(ptr + mid)) {   //k=5  mid=6
            right = mid ;
        } else if (k > *(ptr + mid)) {  //k=5  mid=4
            left = mid ;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int kil = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("请输入你要找的数:\n");
    scanf("%d", &kil);
    int ret = find_sort2(arr, kil, size);
    printf("下标是:%d", ret);
    return 0;
}
