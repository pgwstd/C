//
// Created by 潘光伟 on 2022/4/18.
//
//输入一串字符串，然后自定义输出的部分
//比如：helloworld  输入6，则输出world(利用函数实现)
#include "stdio.h"
#include "string.h"
void my_Printf(char* str,int k,int sz)
{

    int b=k-1;
    for (int i = b; i < sz; ++i) {
        printf("%c", *(str + b));
        b++;
    }

}
int main()
{

    char str[100];
    int k=0;
    printf("请输入字符串:\n");
    scanf("%s",str);
    int sz=strlen(str);
    printf("请输入从哪个位置开始输出:\n");
    scanf("%d",&k);
    my_Printf(str,k,sz);
    return 0;
}
