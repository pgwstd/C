//
// Created by 潘光伟 on 2022/3/21.
//
//罗马数字转整数
#include "stdio.h"

int RomanToint(char* s)
{
    char*p=s;
    int i_count=0;
    int v_count=0;
    int x_count=0;
    int l_count=0;
    int c_count=0;
    int d_count=0;
    int m_count=0;

    while (*p!='\0'){
        if(*p=='I')
            i_count++;
        else if(*p=='V')
            v_count++;
        else if(*p=='X')
            x_count++;
        else if(*p=='L')
            l_count++;
        else if(*p=='C')
            c_count++;
        else if(*p=='D')
            d_count++;
        else if(*p=='M')
            m_count++;
        else
            printf("输入有误！\n");
//        switch (*s) {
//            case 'I':
//                i_count++;
//                continue;
//            case 'V':
//                v_count++;
//                continue;
//            case 'X':
//                x_count++;
//                continue;
//            case 'L':
//                l_count++;
//                continue;
//            case 'C':
//                c_count++;
//                continue;
//            case 'D':
//                d_count++;
//                continue;
//            case 'M':
//                m_count++;
//                continue;
//            default :
//                printf("输入有误！\n");
//                break;
//
//        }
        p++;
    }
    return (i_count*1)+(v_count*5)+(x_count*10)+(l_count*50)+(c_count*100)+(d_count*500)+(m_count*1000);
}

int main()
{

    char* s;
    printf("请输入你要转换的数:\n");
    scanf("%c",s);
    int ret=RomanToint(s);
    printf("%d",ret);
    return 0;
}

