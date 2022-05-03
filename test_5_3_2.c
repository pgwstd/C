//
// Created by 潘光伟 on 2022/5/3.
//
//复制部分字符串，如:
//hello world! 输入7输出的是world!
#include "stdio.h"
void print_sort(char str[],int len)
{
     char *p=str+len-1;//索引号少1，所以减去1
//    for (int i = len-1; i < sz; ++i) {
        while(*p!='\0')
        {
            printf("%c",*p);
            p++;
        }
//    }
}
int main()
{
    char str[100];//开辟100的字符串空间
    int len=0;
    printf("请输入字符串:\n");
//    scanf("%s",str);  //这种方法输入字符串的时候空格的时候会出错，所以不能用这种方法输入有空格的字符串
//    int sz=strlen(str);
    gets(str);
    printf("输入从哪个位置输出字符串:\n");
    scanf("%d",&len);
    print_sort(str,len);
    return 0;
}

