//
// Created by 潘光伟 on 2022/10/20.
//
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
void waiting();
void stop();
int wait_logding;
int main(){
    int pid1, pid2;
    while((pid1 = fork()) == -1);
    if(pid1 > 0){
        while((pid2 = fork()) == -1);
        if(pid2 > 0){
            wait_logding = 1;
            signal(SIGINT,stop);
            waiting();
            sleep(1);
            kill(pid1, 16);
            sleep(1);
            kill(pid2, 17);
            wait(0);
            wait(0);
            printf("parent process is killed!\n");
            exit(0);
        }
        else{
            signal(SIGINT,SIG_IGN);
            signal(SIGQUIT,SIG_IGN);
            signal(17,stop);
            wait_logding=1;
            waiting();
            lockf(1,1,0);
            printf("child process 2 is killed by parent!\n");
            lockf(1,0,0);
            exit(0);

        }
    }
    else{
        signal(SIGINT,SIG_IGN);
        signal(SIGQUIT,SIG_IGN);
        signal(16,stop);
        wait_logding=1;
        waiting();
        lockf(1,1,0);
        printf("child process 1 is killed by parent!\n");
        lockf(1,0,0);
        exit(0);
    }
}

void waiting(){
    while(wait_logding != 0);
}

void stop(){
    wait_logding = 0;
}

