#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
    int i;
    int a[10];
    int temp;
    for(i=0;i<10;i++){
        a[i]=0;
    }
    for(i=0;i<10000;i++){
        temp=rand();
        temp=temp%10;
        a[temp]++;
    }
    for(i=0;i<10;i++){
        printf("%d--%f\n",i,a[i]/100.0);
    }
    return 0;

}
