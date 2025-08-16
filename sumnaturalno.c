//print the usm of first n natural number
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of first n natural numbers
    int sum =0;
    for (int i = 1; i <= n; ++i) {
        sum += i; // Add each number to (sum sum = sum + i)
    }
    // i = 0 sum = 0 +1 = 1
    // i = 1 sum = 1 +2 = 3
    printf("Sum = %d\n", sum); // Print the result
    return 0;
} 