//
// Created by 潘光伟 on 2022/2/27.
//
//写一个100-200的素数
#include "stdio.h"
int xshu(){
    int i=0;
    int j=0;
    int count=0;
    for (i = 100; i <=200 ; i++) {
        for (j = 2; j < i; j++) {
            if(i%j==0) {
                break;
            }
            else{
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int sum=xshu();
    printf("%d",sum);
    return 0;
}
