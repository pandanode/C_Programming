//write a function to calcualte the sum of two numbers using pass by reference
#include <stdio.h>

void passbyreference(int a, int b, int *sum, int *prod, int *avg);
int main(){
    int a =3 , b= 4;
    int sum,prod,avg;
    passbyreference(a, b, &sum, &prod, &avg);
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", prod);
    printf("Average: %d\n", avg);
    return 0;
}
void passbyreference(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}


    