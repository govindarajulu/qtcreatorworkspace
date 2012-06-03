#include <stdio.h>
#include <pthread.h>
#include <string.h>
void* thread(void* nouse){
    return NULL;
}

main(){
    pthread_t th,th1;
    th=pthread_create(&th,NULL,thread,NULL);
    th1=pthread_create(&th,NULL,thread,NULL);
    printf("th id in main()=%d",(int)th);
    printf("th1 id in main()=%d",(int)th1);
}
