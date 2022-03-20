//
// Created by 潘光伟 on 2022/3/20.
//
//制做一个函数，使的从键盘输入数组的个数，要他们输出和
#include "stdio.h"


int InputArray(int *p, int n) {    //输入函数
    int size=0;
    printf("请输入你要输入的数:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &p[i]);
    }
    while(*p != '\0')
    {
        size++;
        p++;
    }
    return size;
}

int OutputArray(int *p, int n) {  //输出函数
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
    int sz = InputArray(arr, n);
    if (sz > n) {
        printf("你输入的个数与实际规定的个数不一致！");
    } else {
        int ret = OutputArray(arr, n);
        printf("输出他们和:\n");
        printf("%d ", ret);
        return 0;
    }
}
