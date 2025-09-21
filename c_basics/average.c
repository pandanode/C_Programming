//calculate the average of two numbers using arrays
#include <stdio.h>
void main() {
    int arr[2];
    float average, sum=0;
    int i;
    printf("Enter the two number:");
    scanf("%d %d", &arr[0], &arr[1]);
    for (i = 0; i < 2; i++) {
        sum = sum + arr[i];
    }
    average = sum / 2;
    printf("The aveage of the two number is %.2f\n", average);
}