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
    pthread_attr_t th_attr;
    struct sched_param th_sched;
    th_sched.__sched_priority=1;
    pthread_attr_init(&th_attr);
    pthread_attr_setschedparam(&th_attr,&th_sched);


    pthread_t th1;
    pthread_attr_t th_attr1;
    struct sched_param th_sched1;
    th_sched.__sched_priority=10;
    pthread_attr_init(&th_attr1);
    pthread_attr_setschedparam(&th_attr1,&th_sched1);
}
