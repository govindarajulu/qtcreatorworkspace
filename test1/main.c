#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <error.h>
void* thread(void* nouse){
    printf("th in thread %d\n",pthread_self());
    return NULL;
}

main(){
    pthread_t th;
    pthread_attr_t attr;
    pthread_attr_init(&attr);
}
