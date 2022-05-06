//
// Created by 潘光伟 on 2022/4/22.
//
//有五个跳水运动员，有人预测他们的比赛结果
//a说：b是第二，我是第三
//b说：我是第二，e是第四
//c说：我是第一，d是第二
//d说：c是最后，我是第三
//e说：我是第四，a是第一
//他们每个人只说对了一半
#include "stdio.h"
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    for (int a = 0; a <=5 ; ++a) {
        for (int b = 0; b <=5 ; ++b) {
            for (int c = 0; c <=5 ; ++c) {
                for (int d = 0; d <=5 ; ++d) {
                    for (int e = 0; e <=5 ; ++e) {
                        if(((b==2)+(a==3)==1)
                            &&((b==2)+(e==4)==1)
                            &&((c==1)+(d==2)==1)
                            &&((c==5)+(d==3)==1)
                            &&((e==4)+(a==1)==1))
                            if(a*b*c*d*e==120){
                            printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);}
                    }
                }
            }
        }
    }
    return 0;
}
