//
// Created by 潘光伟 on 2022/5/9.
//
//运用函数实现数组元素左旋转与右旋转
//输入要旋转的个数n
//ABCD输出的左旋转2个数就是CDAB
//#include "stdio.h"
//#include "string.h"
//#include "assert.h"
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

//void reverse(char* left,char* right)
//{
//    assert(left);
//    assert(right);
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//void String_left_rotate(char* array,int n)
//{
//    assert(array);
//    int len= strlen(array);
//    reverse(array,array+n-1);
//    reverse(array+n,array+len-1);
//    reverse(array,array+len-1);
//
//}
//void String_right_rotate(char* array,int n)
//{
//    assert(array);
//    int len= strlen(array);
//    reverse(array,array+len-n-1);
//    reverse(array+len-n,array+len-1);
//    reverse(array,array+len-1);
//
//}
//void String_print(char* array)
//{
//    int len= strlen(array);
//    for (int i = 0; i < len; ++i) {
//        printf("%c",array[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//    char arr[10]="ABCDEF";
//    int n=0;
//    printf("请输入你要旋转的元素的个数:\n");
//    scanf("%d",&n);
//    printf("左移:\n");
//    String_left_rotate(arr,n);
//    String_print(arr);
//    printf("右移:\n");
//    String_right_rotate(arr,n);
//    String_print(arr);
//    return 0;
//}


#include "stdio.h"
#include "string.h"
#include "assert.h"
//写出一个函数，判断一个字符串是否等于另外一个字符串旋转之后的字符串
//如:s1=AABCD 和 s2=BCDAA，返回1
//int String_rotate(char* str1,char* str2) {  //暴力穷举法
//    assert(str1);
//    assert(str2);
//    int len = strlen(str1);
//    for (int i = 0; i < len; ++i) {  //移多少次头元素
//        char tmp = *str1;
//        for (int j = 0; j < len - 1; ++j) { //向前移动
//            *(str1 + j) = *(str1 + j + 1);
//        }
//        *(str1 + len - 1) = tmp;  //把头元素给数组尾部
//        if (strcmp(str1, str2) == 0) {  //strcmp比较两个字符串是否相同
//            return 1;
//       }
//    }
//    return 0;
//}
int String_rotate(char* str1,char* str2)
{
    assert(str1);
    assert(str2);
    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }
    else
    {
        int len= strlen(str1);
        strncat(str1,str1,len);
        char* ret=strstr(str1,str2);
        return ret != NULL;
//        if(ret == NULL){
//            return 0;
//        }
//        else
//        {
//            return 1;
//        }
    }

}
int main()
{

    char s1[20]="AABCD";
    char s2[]="BCDAA";
    int ret=String_rotate(s1,s2);
    if(ret==1){
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}