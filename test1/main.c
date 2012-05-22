#include <stdio.h>
#include <assert.h>
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <string.h>
#include <dlfcn.h>
void foo(const int *restrict p){

}

int main(int argc, char* argv[])
{
    int  p;
    foo(&p);
    return 0;
}
