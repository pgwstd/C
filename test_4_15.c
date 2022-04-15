//
// Created by 潘光伟 on 2022/4/15.
//

//输入两个数，以实现a+aa+aaa+aaaaa+aaaaa(5项)的和
#include "stdio.h"
int main()
{
    int a=0;
    int n=0;
    int sum=0;
    int count=0;
    printf("请输入两个数，a是数字，n是项数:\n");
    scanf("%d%d",&a,&n);
    for (int i = 0; i < n; ++i)
    {
            count=sum*10+a; //因为是aa是等于a乘上10加上2的得到的，所以得到这个规律
            sum+=count;
    }
    printf("它的和是:%d",sum);
    return 0;
}
