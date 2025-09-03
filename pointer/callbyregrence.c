// (call by reference)
#include <stdio.h>

void square(int n);
void swap(int *n);

 int main(){
    int number = 5;
    square(number);
    printf("number = %d\n", number);

   
    swap(&number);
    printf("number after swap = %d\n", number);
    return 0;
 }
 void square(int n){
    n = n * n;
    printf("square = %d\n", n);
    
}
 
void swap(int *n){
    *n = (*n) * (*n);
    printf("square inside swap function = %d\n", *n);
    
}



 
