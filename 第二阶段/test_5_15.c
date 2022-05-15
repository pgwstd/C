//
// Created by 潘光伟 on 2022/5/15.
//
#include "stdio.h"

struct book {
//    char id;
//    char pd;
//    int pir;
    double d;//8      8+16+8=32
    char c;//1
    int i;//4
};
struct book2{
    char c1;
    struct book b1;
    double d;
};
int main() {
    struct book2 b2;
    printf("%d", sizeof(b2));
    return 0;
}
