//
// Created by 潘光伟 on 2022/5/3.
//
//复制部分字符串，如:
//hello world! 输入7输出的是world!
#include "stdio.h"
void print_sort(char str[],int len)
{

}
int main()
{
    char str[100];//开辟100的字符串空间
    int len=0;
    printf("请输入字符串:\n");
    scanf("%d",str);
    printf("输入从哪个位置输出字符串:\n");
    scanf("%d",&len);
    print_sort(str,len);
    return 0;
}

