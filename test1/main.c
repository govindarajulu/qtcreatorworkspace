#include <stdio.h>
#include <assert.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <string.h>
#include <dlfcn.h>
int main(int argc, char* argv[])
{
pid_t pid;
pid_t ppid;
printf("before fork\n");
printf("pid=%d,ppid=%d\n",(int)getpid(),(int)getppid());
printf("after fork()\n");
fork();
printf("pid=%d,ppid=%d\n",(int)getpid(),(int)getppid());
sleep(5);
return 0;
}
