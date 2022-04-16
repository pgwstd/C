//
// Created by 潘光伟 on 2022/4/16.
//
//使用指针逆序一个字符串
#include "stdio.h"
#include "string.h"
#include "assert.h"
void removearr(char* str)
{
    assert(str);  //断言判断字符串是否是空
    int ret=strlen(str); //求出该字符串的长度
    char* left=str;  //定义字符串第一位位置变量
    char* right=str+ret-1;  //定义字符串最后一位的位置变量
    while (left<right){
        char tmp=*left;
        *left=*right;  //此处的*是解引用的意思
        *right=tmp;
        left++;
        right--;
    }

}
int main()
{

    char arr[]="abcdef";
    removearr(arr);
    printf("%s",arr);
    return 0;
}
