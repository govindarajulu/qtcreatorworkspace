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
voice sig_handler(int sig_num){
    ++count;
}

int main(int argc, char* argv[])
{
    struct sigaction sa;
    memset(&sa,0,sizeof(sa));
}
