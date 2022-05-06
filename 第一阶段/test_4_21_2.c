//
// Created by 潘光伟 on 2022/4/21.
//
//找杀手，a说不是我，b说是c，c说是d，d说c在胡说，三个人说了真话，一个人说了假话，找出杀手
#include "stdio.h"
int main()
{
    char killer=0;
    for (killer = 'A'; killer<='D' ; ++killer) {
        if(((killer!='A') + (killer=='C') + (killer=='D') + (killer=='C')) ==3) {
            printf("杀手是:%c\n", killer);
        }
    }

    return 0;
}