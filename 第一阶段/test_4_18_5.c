//
// Created by 潘光伟 on 2022/4/18.
//
//用编程计算出以下题目
//一瓶可乐1元一瓶，而两个瓶子又可以换一瓶可乐，给20元，可以喝到多少瓶可乐
#include "stdio.h"
int main()
{
    int money=0; //定义金钱变量
    int count=0;
    printf("请输入金钱:\n");
    scanf("%d",&money);
    int total=0; //定义能喝的瓶数
    total=money;
    count=money;
    while (count/2){
        total+=count/2+count%2;
        count=count/2;
    }
//    if(money>0)
//    total=2*money-1;(规律，些种方法也行)
    printf("%d",total);
    return 0;
}
