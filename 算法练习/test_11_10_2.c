//
// Created by 潘光伟 on 2022/11/10.
//
//第二题
#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define M 5
#define N 3
int available[N] = {3, 3, 2};
int max[M][N] = {{7, 5, 3},
                 {3, 2, 2},
                 {9, 0, 2},
                 {2, 2, 2},
                 {4, 3, 3}};
int allocation[M][N] = {{0, 1, 0},
                        {2, 0, 0},
                        {3, 0, 2},
                        {2, 1, 1},
                        {0, 0, 2}};
int need[M][N], p[M];

void init() {    //初始化need数组
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
}

void output() { //输出need数组
    int i, j;
    printf("\nThe table of allocation is:");
    for (i = 0; i < M; i++) {
        printf("\nP[%d]: ", i);
        for (j = 0; j < N; j++) {
            printf(" %d ", allocation[i][j]);
        }
    }
}

int compare(int need[], int work[]) { //比较need和work
    int j;
    for (j = 0; j < N; j++) {
        if (need[j] > work[j]) {
            return FALSE;//如果need大于work，返回FALSE
        }
    }
    return TRUE;
}

int isSecurity(int available[], int need[][N], int allocation[][N]) {  //判断是否安全
    int i, j, k = 0, flag, finish[M], work[N]; //finish[i]表示进程i是否已经完成,work[i]表示当前可用资源
    //为每一个进程的finish赋值为FALSE以及将available赋值给work
    for (i = 0; i < M; i++) {
        finish[i] = FALSE;
    }
    for (i = 0; i < N; i++) {
        work[i] = available[i];
    }
    //开始判断
    while (TRUE) {
        flag = FALSE;
        for (i = 0; i < M; i++) {
            if (finish[i] == FALSE && compare(need[i], work) == TRUE) {
                for (j = 0; j < N; j++) {
                    work[j] += allocation[i][j];
                }
                finish[i] = TRUE;
                p[k++] = i;
                flag = TRUE;
                break;
            }
        }
        if (flag == FALSE) {
            for (i = 0; i < M; i++) {
                if (finish[i] == FALSE) return FALSE;
            }
            return TRUE;
        }
    }
}

void operate() {
    int i, j, flag, f1, request[N];
    printf("****************************************************************\n");
    printf("when you input a value which is smaller than zero,it will stop!\n");
    while (TRUE) {
        f1 = FALSE;
        printf("Input which process send a request\n");
        scanf("%d", &i);
        //当输入的i大于进程数的时候，输出“This process does not exist!\n”或者当i是负数的时候，退出循环
        if (i < 0 || i >= M) {
            if (i < 0) {
                printf("The program is over!\n");
                break;
            } else {
                printf("This process does not exist!\n");
                continue;
            }
        }
        printf("Input a request\n");
        for (j = 0; j < N; j++) {
            scanf("%d", &request[j]);
        }
        //当申请量大于需求量的时候，输出“The demand is out of need!\n”以及输出output()函数。
        for (j = 0; j < N; j++) {
            if (request[j] > need[i][j]) {
                printf("The demand is out of need!\n");
                f1 = TRUE;
                break;
            }
        }
        if (f1 == TRUE) {
            output();
            continue;
        }
        //当申请量大于系统可利用资源的时候，输出“The request is out of available!\n”以及output()函数。

        for (j = 0; j < N; j++) {
            if (request[j] > available[j]) {
                printf("The request is out of available!\n");
                int f1 = TRUE;
                break;
            }
        }
        if (f1 == TRUE) {
            output();
            continue;
        }
        if (f1 == TRUE) continue;

        //Available[j] = Available[j]-Request[j];

        for (j = 0; j < N; j++) {
            available[j] -= request[j];
        }
        //Allocation[i,j] = Allocation[i,j]+Request[j];

        for (j = 0; j < N; j++) {
            allocation[i][j] += request[j];
        }
        //Need[i,j] = Need[i,j]-Requesti[j];

        for (j = 0; j < N; j++) {
            need[i][j] -= request[j];
        }

        flag = isSecurity(available, need, allocation);
        if (flag == TRUE) {
            printf("The request is security!\n");
            printf("The security sort is:\n");
            for (i = 0; i < M; i++) {
                i == 4 ? printf("P[%d]", i) : printf("P[%d]-->", p[i]);
            }
            output();
            printf("\n**************************************************************\n");
        } else {
            printf("The request is insecurity!\n");
            printf("this request should wait!\n");
            output();
            for (j = 0; j < N; j++) {
                available[j] += request[j];
                allocation[i][j] -= request[j];
                need[i][j] += request[j];
            }
            printf("\n*************************************************************\n");
        }
    }
}

int main() {
    init();
    operate();
}

