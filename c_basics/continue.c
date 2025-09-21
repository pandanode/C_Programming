// print the odd number from 1 to 50
#include <stdio.h>
int main(){

    printf("Odd numbers from 1 to 50:\n");
    for(int i=5;i<=50;i++){
        if(i%2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;

}
