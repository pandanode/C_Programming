//program to calculate the average of fthe three number
#include <stdio.h>
int main(){
    int no1, no2,no3,average,sum;
    printf("ENTER THE NUMBER:");
    scanf("%d %d %d",&no1, &no2, &no3);
    
    sum = no1 + no2 + no3;
    average = sum/3;
    printf("evage of th three number is: %d\n", average);
    return 0;
}