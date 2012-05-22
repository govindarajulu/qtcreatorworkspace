#include <stdio.h>
#include <assert.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <string.h>
#include <dlfcn.h>

int spawn(const char* program,const char** arglist){
    pid=fork();
    if(pid==0){
        execvp(program,arglist);
    } else {
        return pid;
    }
}

int main(int argc, char* argv[])
{
    char* arglist[]={"-l"};
    char* program="ls";

return 0;
}
