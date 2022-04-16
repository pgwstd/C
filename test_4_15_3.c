//
// Created by 潘光伟 on 2022/4/15.
//
//计算出0-100000的水仙花数
#include "stdio.h"
#include "math.h"
int main()
{
    int i=0;
    for (i = 100; i <= 100000; ++i) {
        //计算出数是几位的
        int n=1;
        int tmp=i;
        while (tmp/10){
            n++;
            tmp=tmp/10;
        }
        //计算这个数各位数3次方的和
        tmp=i;
        int sum=0;
        while (tmp){
            sum+=pow(tmp%10,3);
            tmp=tmp/10;
        }
        if(sum==i){
            printf("%d ",i);
        }


    }
    return 0;
}

