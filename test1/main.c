#include <stdio.h>
#include <pthread.h>
#include <string.h>
void* thread(void* nouse){
    return NULL;
}

main(){
    char *a;
    a=thread(NULL);
    printf("s%s\n",a);
}
