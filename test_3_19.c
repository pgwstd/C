//
// Created by 潘光伟 on 2022/3/19.
//
#include "stdio.h"
#include "stdlib.h"
//输入一个自定义大小的数组，进行从小到大排序
int main() {
    int n = 0;
    int *arr;
    printf("你要进行进行多少个数排序:\n");
    scanf("%d", &n);
    arr=(int *)malloc(n);//分配数组大小，不然后面输入没有数组大小会出错
    if (1 > n) {          //判断输入的个数是否符合
        printf("输入错误！\n");
    } else {
        printf("输入排序数字:\n");
        for (int i = 0; i < n; ++i) {  //循环输入数组
            scanf("%d", &arr[i]);
        }
        for (int j = 0; j <n-1; j++) {  // 冒泡排序
            if (arr[j] > arr[j + 1]) {
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

            }
        }
            printf("从小到大输入数组:\n");
            for (int k = 0; k < n; k++) {  //循环输出
                printf("%d ", arr[k]);
            }

            return 0;
        }
    }
