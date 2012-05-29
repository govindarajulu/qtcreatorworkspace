#include <stdio.h>
#include <assert.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <string.h>
#include <dlfcn.h>
#include <signal.h>

sig_atomic_t count=0;
void sig_handler(int sig_num){
    printf("ctrl+c pressed!!!\n");
    printf("sig_num=%d",sig_num);
    signal(sig_num,sig_handler);
    ++count;
    kill(getpid(),SIGCONT);
    return;
}

int main(int argc, char* argv[])
{
    struct sigaction sa;
    int pid;
    memset(&sa,0,sizeof(sa));
    sa.sa_handler=sig_handler;
    sa.sa_flags=SA_RESTART;
    sigemptyset(&sa.sa_mask);
    //sigaction(SIGCHLD,&sa,NULL);
    pid=fork();
    if(pid==0){
        printf("child process-%d\n",getpid());
        exit(0);
    }
    printf("sleeping for 20 sec\n%d\n",pid);
    sleep(20);
}
