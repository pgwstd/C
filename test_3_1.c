//
// Created by 潘光伟 on 2022/3/1.
//

//用递归逆序一个数组，不能使用string函数
#include "stdio.h"
int my_strlen(char *p)   //计算数组大小函数
{
    int count=0;
    if(*p!='\0'){
        count++;
        p++;
    }
    return count;
}

void remove_string(char* str)   //移动数组函数
{
    char ret=*str;
    int size=my_strlen(str);
    *str=*(str+size-1);
    *(str+size-1)='\0';
    if(my_strlen(str+1)>=2)
    {
        remove_string(str+1);
    }
     *(str+size-1)=ret;
}
int main()
{
    char arr[]="abcdef";
    remove_string(arr);
    printf("%s\n",arr);
    return 0;
}