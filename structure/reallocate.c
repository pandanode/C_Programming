#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) calloc(5,sizeof(int));

    printf("enter the number(5)");
    for(int i=1;i<5;i++){
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    for(int i=1;i<8;i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=1;i<8;i++){
        scanf("the number is%d\n", &ptr[i]);
    }
    return 0;
}
    

