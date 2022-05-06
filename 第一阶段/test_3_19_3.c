//
// Created by 潘光伟 on 2022/3/19.
//
#include <stdio.h>
void Swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swap: a = %d, b = %d\n", x, y);
}
 int main()
    {
        int a, b;
        printf("Please enter a, b: ");
        scanf("%d,%d", &a,&b);
        printf("Before swap: a = %d, b = %d\n", a, b);
        Swap(a,b);
    }


