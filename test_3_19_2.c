//
// Created by 潘光伟 on 2022/3/19.
//
//韩信点兵
#include "stdio.h"
int main() {

    for (int n = 1; n < 2200; ++n) {
        if ((n % 5 == 1) && (n % 6 == 5) && (n % 7 == 4) && (n % 11 == 10))
            printf("一共还有%d兵力\n", n);
    }

        return 0;
    }

