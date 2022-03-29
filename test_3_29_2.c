//
// Created by 潘光伟 on 2022/3/29.
//
//输入一串单词，要求倒过来输出，但符号不能改变位置(腾讯笔试题)
#include <string.h>
#include "stdio.h"

void reverse(char *left, char *right) {
    char tmp = 0;
    while (*left < *right) {
        tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right++;
    }

}

int main() {
    char arr[100] = {0};
    printf("请输入字符串:\n");
    gets(arr);
    int len = strlen(arr); //求出他这个的数组的大小
    reverse(arr, arr + len - 1); //把这个数组的第1位的位置和最后1位的位置给形参
    char *start=arr;
    while (*start){
        char *end=start;
        while (*end!=' ' && *end!='\0'){  //不是空格和\0 就加加，指针向后
            end++;
        }
        reverse(start, end - 1);  //调用函数再次反转回来，但这次是一断一断单词反的，不是全部
        if(*end==' ')
            start=end+1;
        else
            start=end;
    }
    puts(arr); //打印数组

    return 0;
}
