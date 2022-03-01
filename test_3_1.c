//
// Created by 潘光伟 on 2022/3/1.
//

//用递归逆序一个数组，不能使用string函数
#include "stdio.h"
int my_strlen(char *p)
{
    int count=0;
    if(p!='\0'){
        count++;
        p++;
    }
    return count;
}

void remove_string(char* str)
{
    int ret=0;
    int size=my_strlen(str)-1;

}
int main()
{
    char arr[]="abcdef";
    remove_string(arr);
    printf("%s\n",arr);
    return 0;
}