//
// Created by 潘光伟 on 2022/5/19.
//
//main函数的调用
#include "call.h"
//使用枚举
enum cool{
    退出通讯录,
    增加联系人,
    删除联系人,
    查找联系人,
    修改联系人,
    打印联系人
};
int main()
{
    caller Initcall;
    mycall(&Initcall);
    int input=0;
    do {
        menu();
        printf("请选择->");
        scanf("%d",&input);
        switch (input) {
            case 增加联系人:
                AddCall(&Initcall);
                break;
            case 删除联系人:
                DeleteCall(&Initcall);
                break;
            case 查找联系人:
                FindCall(&Initcall);
                break;
            case 修改联系人:
                ModifyCall(&Initcall);
                break;
            case 打印联系人:
                PintfCall(&Initcall);
                break;
            case 退出通讯录:
                printf("即将退出通讯录!\n");
                break;
            default:
                printf("你的输入有误！\n");
                break;
        }
    } while (input);
}
