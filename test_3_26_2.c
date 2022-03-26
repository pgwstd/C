//
// Created by 潘光伟 on 2022/3/26.
//
#include "stdio.h"
#include "assert.h"
int my_strlen(const char *str)
{
    int count=0;
    assert(str!=NULL);
    while (*str!='\0') {
        count++;
    }
    return count;

}
int main()
{

    char arr[]="adafafa";
    printf("%d\n",my_strlen(arr));
    return 0;
}

