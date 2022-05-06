//
// Created by 潘光伟 on 2022/3/1.
//
//使用递归，让1429这个数字1+4+2+9
#include "stdio.h"
int sum_fun(int n){
    if(n<9) {
        return n;
    }
    else {
        return sum_fun(n /10)+n%10;
    }
}
int main()
{

    int num=1429;
    int sum=sum_fun(num);
    printf("%d\n",sum);
    return 0;
}
