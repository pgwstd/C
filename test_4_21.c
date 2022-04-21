//
// Created by 潘光伟 on 2022/4/21.
//
//杨辉三角
#include "stdio.h"
int main()
{
    int arr[10][10]={0};
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j <=i ; ++j) {
            if(j==0) {
                arr[i][j] = 1;
            }
            if(j==i){
                arr[i][j] = 1;
            }
            if(i>=2){
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j <=i ; ++j) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}