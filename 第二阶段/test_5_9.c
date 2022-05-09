//
// Created by 潘光伟 on 2022/5/9.
//
//运用函数实现数组元素左旋转与右旋转
//输入要旋转的个数n
//ABCD输出的左旋转2个数就是CDAB
#include "stdio.h"
#include "string.h"
void String_left_rotate(char* array,int n) {
    int len = strlen(array);
    for (int i = 0; i < n; ++i) {  //移多少次头元素
        char tmp = *array;
        for (int j = 0; j < len -  1; ++j) { //向前移动
            *(array + j) = *(array + j + 1);
        }
        *(array + len - 1) = tmp;  //把头元素给数组尾部
    }
}
void String_right_rotate(char* array,int n)
{

}
void String_print(char* array)
{
    int len= strlen(array);
    for (int i = 0; i < len; ++i) {
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
