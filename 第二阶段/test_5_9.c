//
// Created by 潘光伟 on 2022/5/9.
//
//运用函数实现数组元素左旋转与右旋转
//输入要旋转的个数n
//ABCD输出的左旋转2个数就是CDAB
#include "stdio.h"
#include "string.h"
#include "assert.h"
//void String_left_rotate(char* array,int n) {
//    assert(array);//断言
//    int len = strlen(array);
//    for (int i = 0; i < n; ++i) {  //移多少次头元素
//        char tmp = *array;
//        for (int j = 0; j < len -  1; ++j) { //向前移动
//            *(array + j) = *(array + j + 1);
//        }
//        *(array + len - 1) = tmp;  //把头元素给数组尾部
//    }
//}
//void String_right_rotate(char* array,int n)
//{
//    assert(array);//断言
//    int len = strlen(array);
//    for (int i = 0; i < n; ++i) {  //移多少次尾元素
//        char tmp = *(array+len-1);
//        for (int j = len-1; j >= 0; --j) { //向后移动
//            *(array + j) = *(array + j - 1);
//        }
//        *array  = tmp;  //把尾元素给数组头部
//    }
//}

void reverse(char* left,char* right)
{
    assert(left);
    assert(right);
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}
void String_left_rotate(char* array,int n)
{
    assert(array);
    int len= strlen(array);
    reverse(array,array+n-1);
    reverse(array+n,array+len-1);
    reverse(array,array+len-1);

}
void String_right_rotate(char* array,int n)
{
    assert(array);
    int len= strlen(array);
    reverse(array,array+len-n-1);
    reverse(array+len-n,array+len-1);
    reverse(array,array+len-1);

}
void String_print(char* array)
{
    int len= strlen(array);
    for (int i = 0; i < len; ++i) {
        printf("%c",array[i]);
    }
    printf("\n");
}
int main()
{
    char arr[10]="ABCDEF";
    int n=0;
    printf("请输入你要旋转的元素的个数:\n");
    scanf("%d",&n);
    printf("左移:\n");
    String_left_rotate(arr,n);
    String_print(arr);
    printf("右移:\n");
    String_right_rotate(arr,n);
    String_print(arr);
    return 0;
}
