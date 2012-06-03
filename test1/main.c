#include <stdio.h>
#include <pthread.h>
#include <string.h>
void* thread(void* nouse){
    return NULL;
}

main(){
    pthread_t th;
    th=pthread_create(&th,NULL,thread,NULL);
    printf("th id in main()=%d",(int)th);
}
