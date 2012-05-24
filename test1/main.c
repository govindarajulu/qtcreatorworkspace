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
    struct sigaction sa;
    memset(&sa,0,sizeof(sa));
    sa.sa_handler=&sig_handler;
    sigaction(SIGINT,&sa,NULL);
    printf("ctrl+c pressed!!!\n");
    ++count;
    signal(sig_num,sig_handler);
}

int main(int argc, char* argv[])
{
    struct sigaction sa;
    memset(&sa,0,sizeof(sa));
    sa.sa_handler=&sig_handler;
    sigaction(SIGINT,&sa,NULL);
    printf("sleeping for 20 sec\n");
    sleep(20);
}
