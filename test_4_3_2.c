//
// Created by 潘光伟 on 2022/4/3.
//
#include "stdio.h"
int main()
{
//    char a=-1;  //10000001(原) ->  1111110（反） -> 11111111（补）-> 负数整型提升补符号位也就是祉1，所以11111111111111111111
//    signed char b=-1; //最后补码-1取反得到的原码是-1
//    unsigned char c=-1;//因为是无符号字符类型所以他的整型提升是补0的，所以得到他的原码是255
//    printf("a=%d,b=%d,c=%d",a,b,c);   //a=-1  b=-1   c=255
//    char i=-128;
    //10000000000000000000000010000000（原码）
    //11111111111111111111111101111111（反码)
    //11111111111111111111111110000000(补码)
    //10000000（char里面存的）
    //11111111111111111111111110000000(整型提升)
    //因为输出的的无符号10进制，所以他的原、反、补相同，所以i=11111111111111111111111110000000
//    printf("%u\n",i);  //输出%u无符号10进制,所以i=4294967168
    char n=128;
    //0000000000000000000000010000000(原码)
    //1111111111111111111111101111111（反码）
    //1111111111111111111111110000000（补码）
    //10000000（char里面存的）
    //11111111111111111111111110000000(整型提升)
    printf("%u\n",n);
    return 0;
}
