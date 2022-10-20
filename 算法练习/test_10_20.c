//
// Created by 潘光伟 on 2022/10/20.
//
#include <unistd.h>
#include <stdio.h>
#include <pthread.h>
void printids(const char *s){
    pid_t   pid;
    pthread_t   tid;
    pid = getpid();
    tid = pthread_self();
    printf("%s pd %lu tid %lu (0x%lx)\n", s, (unsigned long)pid,
           (unsigned long)tid, (unsigned long)tid);
}
void *ptest(void *arg){
    printids("new thread: ");
    return(NULL);
}

//void pthread_create(pthread_t *p,){
//
//}
int  main(){
    pthread_t  tid;
    pthread_create(&tid,NULL,ptest,NULL);
    printids("main thread:");
    sleep(1);
    return 0;
}
