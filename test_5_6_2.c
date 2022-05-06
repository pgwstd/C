//
// Created by 潘光伟 on 2022/5/6.
//
//数组排序
//输入n定义数组的长度，
//输入n个元素，然后从小到大输出
#include "stdio.h"
#include "stdlib.h"

void sort(int *array, int n) {
    int tmp = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}
void print_sort(int *array, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
}

int main() {
    int n = 0;
    int *arr;
    printf("请输入你要定义的数组长度:\n");
    scanf("%d", &n);
    arr = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    print_sort(arr, n);
    return 0;
}

