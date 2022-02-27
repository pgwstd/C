//
// Created by 潘光伟 on 2022/2/26.
//
//计算十个整数里面的最大数
#include "stdio.h"
int main()
{
    int arr[10]={0};
//    int max=0;  //这样定义有bug计算负数的时候最是为0
    int max=arr[0]; //定义一个数组内元素，让它进行比较，就不会比较负数为0的情况了
    printf("请输入十个整数:\n");
    for (int n = 0; n < 10; ++n) {
        scanf("%d", &arr[n]);

        for (int i = 0; i < 10; ++i) {
            if (arr[i] > max)
                max = arr[i];

        }
    }
    printf("%d\n",max);
    return 0;
}