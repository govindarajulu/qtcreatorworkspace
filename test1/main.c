#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <error.h>
void* thread(void* nouse){
    return NULL;
}

main(){
    pthread_t th,th1;
    pthread_create(&th,NULL,thread,NULL);
    perror("pthread_create");
    pthread_create(&th1,NULL,thread,NULL);
    perror("pthread_create");
    printf("th id in main()=%d",(int)th);
    printf("th1 id in main()=%d",(int)th1);
}
