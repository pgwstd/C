//
// Created by 潘光伟 on 2022/6/18.
//
#include "stdio.h"
//冒泡排序
void bbubble_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }





}
//输出数组
void print_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{

    int a[] = {0};
    //从键盘输入数组
    int n;
    printf("请输入数组的长度：");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("请输入第%d个数：", i + 1);
        scanf("%d", &a[i]);
    }
    bbubble_sort(a, n);
    print_array(a, n);
}