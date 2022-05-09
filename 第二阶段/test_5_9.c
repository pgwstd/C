//
// Created by 潘光伟 on 2022/5/9.
//
//运用函数实现数组元素左旋转与右旋转
//输入要旋转的个数n
//ABCD输出的左旋转2个数就是CDAB
#include "stdio.h"
#include "string.h"
void String_left_rotate(char* array,int n)
{
    int len=strlen(array);
    for (int i = 0; i < n; ++i) {
         array[i]=array[len-i-1];
    }
    for (int i = 0; i < len-n-1; ++i) {
        array[i]=array[n+i];
    }
}
void String_right_rotate(char* array,int n)
{

}
void String_print(char* array)
{
    int len= strlen(array);
    for (int i = 0; i < len-1; ++i) {
        printf("%c",array[i]);
    }
}
int main()
{
    char arr[10]="ABCDEF";
    int n=0;
    printf("请输入你要旋转的元素的个数:\n");
    scanf("%d",&n);
    String_left_rotate(arr,n);
    String_print(arr);
//    String_right_rotate(arr,n);
    return 0;
}
