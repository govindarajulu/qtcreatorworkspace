#include <stdio.h>
#include <pthread.h>
#include <string.h>
char* thread(void* nouse){
    char a[10];
    strcpy(a,"poison");
    return a;
}

main(){
    char *a;
    a=thread(NULL);
    printf("%s\n",a);
}
