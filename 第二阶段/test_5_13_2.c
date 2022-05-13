//
// Created by 潘光伟 on 2022/5/13.
//
//#include "stdio.h"
//#include "string.h"
//int main() {
//
//    char arr1[] = "adfg.wgasg@qq";
//    char *arr2 = ".@ ";
//    char tmp[20] = {0};
//    strcpy(tmp, arr1);
//    printf("%s\n", tmp);
//
//    char *ret = NULL;
//    for (ret = strtok(tmp,arr2); ret  !=NULL; ret = strtok(NULL,arr2)) {
//        printf("%s\n", ret);
//    }
//
//    }
#include "stdio.h"
#include "string.h"
#include "errno.h"

int main() {
//    printf("%s\n", strerror(0));
//    printf("%s\n", strerror(1));
//    printf("%s\n", strerror(2));
//    printf("%s\n", strerror(3));
//    printf("%s\n", strerror(4));
//    printf("%s\n", strerror(5));
    FILE *pf = fopen("../第二阶段/test.txt", "r");
    if (pf == NULL) {
        printf("%s", strerror(errno));
        return 1;
    }
    return 0;
}

