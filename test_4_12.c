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

int twoSum(int arr[], int getnum, int nbsize) {
    int i = 0;
    int j = 0;
    for (i = 0; i < nbsize; i++) {
        for (j = 0; j < nbsize; j++) {
            if (arr[i] + arr[j] == getnum) {
                printf("%d %d", i, j);
            }
            else{
                break;
            }

        }

    }
//    printf("你的输入有误!\n");

}

int main() {

    int arr[4] = {2, 7, 11, 15};
    printf("开始遍历数组:\n");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("请输入一个目标值，数组会找去和为目标值的\n");
    printf("两个整数，并且返回数组的下标\n");
    int target = 0;
    scanf("%d", &target);
    printf("这两数数组的下标是:\n");
    twoSum(arr, target, sz);
    return 0;
}