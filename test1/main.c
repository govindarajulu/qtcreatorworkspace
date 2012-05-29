#include <stdio.h>
#include <pthread.h>
#include <string.h>
char* thread(void* nouse){
    char a[10];
    strcpy(a,"poison");
    printf("a=%s\n",a);
    return a;
}

main(){
    char *a;
    a=thread(NULL);
    printf("d%s\n",a);
}
