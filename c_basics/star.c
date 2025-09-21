#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {        // Outer loop for rows
        for (int col = 1; col <= row; col++) {    // Inner loop for columns
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
