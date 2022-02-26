//
// Created by 潘光伟 on 2022/2/26.
//
//计算十个整数里面的最大数
#include "stdio.h"
int main()
{
    int arr[10]={0};
    int max=0;
    printf("请输入十个整数:\n");
    for (int n = 0; n < 10; ++n) {
        scanf("%d", arr);

        for (int i = 0; i < 10; ++i) {
            if (arr[i] > max)
                max = arr[i];

        }
    }
    printf("%d\n",max);
    return 0;
}