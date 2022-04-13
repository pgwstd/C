//
// Created by 潘光伟 on 2022/4/12.
//
//给定一个整数数组 nums 和一个整数目标值 target，
//请你在该数组中找出 和为目标值target的那 两个整数并返回它们的数组下标。
//输入：nums = [2,7,11,15], target = 9
//输出：[0,1]
//解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
//
#include "stdio.h"
#include "stdlib.h"

//两和相加函数
int twoSum(int arr[], int getnum, int nbsize) {
    int i = 0;
    int j = 0;
    int k=1;
    if (k!=0) {
        for (i = 0; i < nbsize; i++) {
            for (j = 0; j < nbsize; j++) {
                if (arr[i] + arr[j] == getnum) {
                    printf("这两个数组的下标是:\n");
                    printf("%d %d", i, j);
                    k=0;
                    return k;
                }

            }

        }
        printf("ERROR\n");
        printf("输入有误!请重新输入！");
    }

}

int main() {

    int *arr;//创建指针数组
    int n=0;
    printf("请输入你要定义的数组长度:\n");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));//动态开辟空间
    printf("开始输入你要输入的数组元素:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("开始遍历数组:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("请输入一个目标值，数组会找去和为目标值的\n");
    printf("两个整数，并且返回数组的下标\n");
    int target = 0;
    scanf("%d", &target);
//    printf("这两数数组的下标是:\n");
    twoSum(arr, target, sz);
//    if(t==-1){
//        printf("输入有误了！\n");
//    }

    return 0;
}