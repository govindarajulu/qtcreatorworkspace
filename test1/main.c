#include <stdio.h>
#include <pthread.h>
void* thread(void* nouse){
    while(1){
        printf("x");
    }
    pthread_exit(NULL);
}

main(){
    pthread_t id;
    pthread_create(&id,NULL,*thread,NULL);
    while(1){
        printf("y");
    }
}
