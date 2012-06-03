#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <error.h>
void* thread(void* nouse){
    printf("th in thread %d\n",pthread_self());
    return NULL;
}

main(){
    pthread_t th,th1;
    pthread_create(&th,NULL,thread,NULL);
    perror("pthread_create");
    pthread_create(&th1,NULL,thread,NULL);
    perror("pthread_create");
    printf("th id in main()=%d\n",(int)th);
    printf("th1 id in main()=%d\n",(int)th1);
}
