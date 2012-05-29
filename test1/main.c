#include <stdio.h>
#include <pthread.h>
void* thread(void* nouse){
    while(1){
        int i;
        i++;
    }
    pthread_exit(NULL);
}

main(){
    pthread_t id;
    pthread_create(&id,NULL,*thread,NULL);
    while(1){
        int j;
        j++
        //printf("y");
    }
}
