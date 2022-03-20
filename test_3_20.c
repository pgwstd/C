//
// Created by 潘光伟 on 2022/3/20.
//
//制做一个函数，使的从键盘输入数组的个数，要他们输出和
#include "stdio.h"

void InputArray(int *p, int n) {
    printf("请输入你要输入的数:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &p[i]);
    }
}

int OutputArray(int *p, int n) {
    int sum = 0;
    for (int j = 0; j < n; ++j) {
        sum += p[j];
    }
    return sum;
}

int main() {
    int *arr;
    int n = 0;
    printf("请输入你要输入数组的个数\n");
    scanf("%d", &n);
    InputArray(arr, n);
    int ret = OutputArray(arr, n);
    printf("输出他们和:\n");
    printf("%d ", ret);
    return 0;
}

