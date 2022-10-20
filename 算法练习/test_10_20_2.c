//
// Created by 潘光伟 on 2022/10/20.
//
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int wait_flag;
void stop();
int main()
{
    int pid1,pid2;
    signal(3,stop);
    while((pid1 = fork()) == -1);
    if(pid1 > 0){
        while((pid2 = fork()) == -1);
        if(pid2 > 0){
            wait_flag = 1;
            signal(2,stop);
            sleep(5);
            kill(pid1,16);
            kill(pid2,17);
            wait(0);
            wait(0);
            printf("\n parent process is killed!!\n");
            exit(0);
        }
        else
        {
            wait_flag = 1;
            signal(17,stop);
            printf("\n child process 2 is kille by parent!!\n");
            exit(0);
        }
    }
    else{
        wait_flag = 1;
        signal(16,stop);
        printf("\n child process 1 is kille by parent!!\n");
        exit(0);
    }
}
void stop()
{
    wait_flag = 0;
}

