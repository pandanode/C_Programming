#include <stdio.h>
#include <stdlio.h>

int main(){
    int *ptr;
    ptr =(int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;

    for(int i= 0; i<5;i++){
        printf("%d", ptr[i]);
    }
}