#include <stdio.h>
#include <assert.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <string.h>
#include <dlfcn.h>

int spawn(const char* program,char* arglist[]){
    int pid;
    pid=fork();
    if(pid==0){
        execvp(program,arglist);
    } else {
        return pid;
    }
}

int main(int argc, char* argv[])
{
    char* arglist[]={"ls","-l"};
    const char* program="ls";
    spawn(program,arglist);
    return 0;
}
