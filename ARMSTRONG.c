//CHECK WHELTHER THE NUMBER IS ARMSTRONG OR NOT
#include <stdio.h>
#include <math.h>
int main()
{
    int num, originalN, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalN = num;

    // Find the number of digits
    while (originalN != 0) {
        originalN /= 10;
        ++n;
    }

    originalN = num;

    // Calculate the sum of the nth powers of its digits
    while (originalN != 0) {
        remainder = originalN % 10;
        result += pow(remainder, n);
        originalN /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}