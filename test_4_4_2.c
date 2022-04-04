//
// Created by 潘光伟 on 2022/4/4.
//
//烧饼有两面，要做好一个兰州烧饼，
// 要两面都弄热。当然，一次只能弄一个的话，
// 效率就太低了。有这么一个大平底锅，一次可以同时放入k个兰州烧饼，
// 一分钟能做好一面。而现在有n个兰州烧饼，至少需要多少分钟才能全部做好呢？
#include "stdio.h"
#include "string.h"
int main()
{
//    int n=0;
//    int k=0;
//    int min1=0;
//    int min2=0;
//    printf("烧饼有多少个？\n");
//    printf("一个锅一次可以放多少个烧饼?\n");
//    scanf("%d %d",&n,&k);
//    min1=k*2;//一次放k个烧饼的时候做好的时长
//    while (n) {
//        min2 = (n - k) * 2;
//    }
//    printf("要多少分钟:%d\n",min1+min2);
//    unsigned int i;
//    for (i = 9; i >=0 ; i--) {
//        printf("%u\n",i);
//    }
    char a[1000];
    int i=0;
    for (int i = 0; i < 1000; ++i) {
        a[i]=-1-i;
    }
    printf("%d\n",strlen(a));//999?  打'\0'所以就有-127+128=255（个数）
    return 0;
}