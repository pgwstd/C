//
// Created by 潘光伟 on 2022/3/20.
//
#include "stdio.h"
int main()
{
    int arr[]={0};
    int n=0;
    int sum=0;
    printf("请输入你要输入数组的个数\n");
    scanf("%d",&n);
    printf("请输入你要输入的数\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; ++j) {
        sum+=arr[j];
    }
    printf("输出他们和:\n");
        printf("%d ",sum);

    return 0;
}

