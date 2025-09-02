// (call by reference)
#include <stdio.h>

int square(int n);
int swap(int *n);

 int main(){
    int number = 5;
    square(number);
    printf("number = %d\n", number);

    swap(&number);
    printf("number after swap = %d\n", number);
    return 0;
 }
 int square(int n){
    n = n * n;
    printf("square = %d\n", n);
    return n;
}
 
int swap(int *n){
    *n = (*n) * (*n);
    printf("square inside swap function = %d\n", *n);
    return;
}



 
