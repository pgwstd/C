//
// Created by 潘光伟 on 2022/11/10.
//
//第一题
/*PROGRAM TO IMPLEMENT BANKER'S ALGORITHM
  *   --------------------------------------------*/
#include <stdio.h>

int curr[5][5], maxclaim[5][5], avl[5]; //Avl是可用资源
int alloc[5] = {0, 0, 0, 0, 0}; //Alloc是已分配的资源
int maxres[5], running[5], safe = 0;    //Safe是安全状态
int count = 0, i, j, exec, r, p, k = 1; //Exec是执行的进程数

int main() {
    printf("\n请输入进程数: ");    //输入进程数
    scanf("%d", &p);    //p是进程数
    for (i = 0; i < p; i++) {
        running[i] = 1;
        count++;
    }
    printf("\n请输入资源数: ");    //输入资源数
    scanf("%d", &r);    //r是资源数
    printf("\n请输入索赔向量:");
    for (i = 0; i < r; i++) {
        scanf("%d", &maxres[i]);
    }
    printf("\n请输入已分配的资源表:\n");  //输入已分配的资源表
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &curr[i][j]);   //输入当前进程已分配的资源
        }
    }
    printf("\n请输入最大需求表:\n");   //输入最大需求表
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &maxclaim[i][j]);   //输入当前进程最大需求的资源
        }
    }
    printf("\n输出资源数: ");  //输出资源数
    for (i = 0; i < r; i++) {
        printf("\t%d", maxres[i]);  //输出最大资源数
    }
    printf("\n输出已分配的资源表:\n");    //输出已分配的资源表
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            printf("\t%d", curr[i][j]); //输出当前进程已分配的资源
        }
        printf("\n");
    }
    printf("\n输出最在需求表:\n"); //输出最大需求表
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            printf("\t%d", maxclaim[i][j]); //输出当前进程最大需求的资源
        }
        printf("\n");
    }
    for (i = 0; i < p; i++) {
        for (j = 0; j < r; j++) {
            alloc[j] += curr[i][j]; //计算已分配的资源
        }
    }
    printf("\n输出已分配的资源:");   //输出已分配的资源
    for (i = 0; i < r; i++) {
        printf("\t%d", alloc[i]);   //输出已分配的资源
    }
    for (i = 0; i < r; i++) {
        avl[i] = maxres[i] - alloc[i];  //计算可用资源
    }
    printf("\n输出可用资源:");   //输出可用资源
    for (i = 0; i < r; i++) {
        printf("\t%d", avl[i]); //输出可用资源
    }
    printf("\n");
    //Main procedure goes below to check for unsafe state.
    while (count != 0) {    //当进程数不为0时
        safe = 0;
        for (i = 0; i < p; i++) {   //遍历进程
            if (running[i]) {
                exec = 1;
                for (j = 0; j < r; j++) {
                    if (maxclaim[i][j] - curr[i][j] > avl[j]) {
                        exec = 0;
                        break;
                    }
                }
                if (exec) { //如果当前进程可以执行
                    printf("\nProcess%d is executing\n", i + 1);    //输出执行的进程
                    running[i] = 0;
                    count--;
                    safe = 1;

                    for (j = 0; j < r; j++) {
                        avl[j] += curr[i][j];
                    }
                    break;
                }
            }
        }
        if (!safe) {    //如果不安全
            printf("\n这个线程处于不安全的状态.\n");
            break;
        } else {    //如果安全
            printf("\n这个线程处于安全的状态.");
            printf("\n可用的资源:");
            for (i = 0; i < r; i++) {   //输出可用资源
                printf("\t%d", avl[i]);
            }
            printf("\n");
        }
    }
}
