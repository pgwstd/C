//
// Created by 潘光伟 on 2022/2/28.
//
//在一组数组中使用二分查找，查找到想要数的下标
#include "stdio.h"

int search(int a[], int k, int n) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] > k) {
            right = mid - 1;
        } else if (a[mid] < k) {
            left = mid + 1;
        } else
            return mid;
    }
    return -1;

}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 7;  //要找的数字
    int size = sizeof(arr) / sizeof(arr[0]);//计算出这个数组的下标个数
    int z = search(arr, key, size);
    if (z != -1) {
        printf("找到了，下标是：%d", z);
    } else {
        printf("找不到");
    }
    return 0;
}

