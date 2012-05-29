#include <stdio.h>
#include <pthread.h>
#include <string.h>
char* thread(void* nouse){
    char a[10];
    int b=17;
    strcpy(a,"poison");
    printf("a=%s\n",a);
    return &b;
}

main(){
    int *a;
    a=thread(NULL);
    printf("%d\n",a);
}
