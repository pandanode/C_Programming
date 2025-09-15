//program to store the first n fibonacci numbers in an array and print them
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of fibonacci numbers  ");
    scanf("%d", &n);

    int fibo[n]; 
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<n;i++){
        fibo[i] =fibo[i-1]+fibo[i-2];
        printf("%d \t",fibo[i]);
    }
    printf("\nFibonacci series: \n");
    return 0;
}