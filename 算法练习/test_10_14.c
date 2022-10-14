//
// Created by 潘光伟 on 2022/10/14.
//
#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "sys/types.h"
#include "sys/wait.h"
int main()
{
    int x;
    int fd[2];
    pipe(fd);   //创建管道
    while ((x = fork()) == -1); //创建一个子进程，循环创建直到成功
    if (x == 0){

    }

}