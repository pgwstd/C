//
// Created by 潘光伟 on 2022/3/21.
//
//罗马数字转整数
#include "stdio.h"

int RomanToint(char* s)
{
    char n=0;
    int i_count=0;
    int v_count=0;
    int x_count=0;
    int l_count=0;
    int c_count=0;
    int d_count=0;
    int m_count=0;
    printf("请输入你要转换的数:\n");
    scanf("%c",&n);
    while (*s!='\0'){
//        if(*s=='I')
//            i_count++;
//        else if(*s=='V')
//            v_count++;
//        else if(*s=='X')
//            x_count++;
//        else if(*s=='L')
//            l_count++;
//        else if(*s=='C')
//            c_count++;
//        else if(*s=='D')
//            d_count++;
//        else if(*s=='M')
//            m_count++;
        switch (*s) {
            case 'I':
                i_count++;
                continue;
            case 'V':
                v_count++;
                continue;
            case 'X':
                x_count++;
                continue;
            case 'L':
                l_count++;
                continue;
            case 'C':
                c_count++;
                continue;
            case 'D':
                d_count++;
                continue;
            case 'M':
                m_count++;
                continue;
            default :
                break;

        }
        s++;
    }
    return (i_count*1)+(v_count*5)+(x_count*10)+(l_count*50)+(c_count*100)+(d_count*500)+(m_count*1000);
}

int main()
{

    char* arr[]={"I","V","X","L","C","D","M"};
    int ret=RomanToint(*arr);
    printf("%d",ret);
    return 0;
}

