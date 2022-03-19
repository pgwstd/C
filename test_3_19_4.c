//
// Created by 潘光伟 on 2022/3/19.
//
//输入五个数输出（运用指针和函数）
#include <stdio.h>
void InputArray(int *pa, int n)
{
    for (; *pa <  n; pa++)
        scanf("%d", pa);

}
void OutputArray(int *pa, int n)
{
    for(; *pa <= n; pa++) {
        printf("%d ", *pa);
    }
    printf("\n");
}
int main()
{
    int a[5];
    printf("请输入5个数:\n");
    InputArray(a, 5);
    printf("输出数组:\n");
    OutputArray(a, 5);
}


