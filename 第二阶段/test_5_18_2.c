//
// Created by 潘光伟 on 2022/5/18.
//
//#include "stdio.h"
////计算大小端
//int Atom_sys()
//{
//    int a=1;
//    if((*(char*)&a) == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
////使用共用体计算
//int Atom_sys2()
//{
//    union U{
//        char i;
//        int a;
//    }u;
//    u.a=1;
//    return u.i;
//}
//int main()
//{
//    int ret=Atom_sys2();
//    if(ret == 1){
//        printf("小端\n");
//    }
//    else
//    {
//        printf("大端\n");
//    }
//
//    return 0;
//}

//计算共用体的大小
#include "stdio.h"
union U{
    char arr[5];
    int a;
}u;
int main()
{

    printf("%d\n",sizeof(u));
    printf("%d\n",sizeof(union U));
    return 0;
}