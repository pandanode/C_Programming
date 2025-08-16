#include <stdio.h>
#include <stdlib.h> // for system()

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum is: %d\n", sum);

    return 0;
}

