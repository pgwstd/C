//
// Created by 潘光伟 on 2022/5/13.
//
#include "stdio.h"
#include "string.h"
int main() {

    char arr1[] = "adfg.wgasg@qq";
    char *arr2 = ".@ ";
    char tmp[20] = {0};
    strcpy(tmp, arr1);
    printf("%s\n", tmp);

    char *ret = NULL;
    for (ret = strtok(tmp,arr2); ret  !=NULL; ret = strtok(NULL,arr2)) {
        printf("%s\n", ret);
    }

    }


