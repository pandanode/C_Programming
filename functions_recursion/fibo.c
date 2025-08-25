// Calculate the Fibonacci sequence using recursion
#include <stdio.h>

// Function prototype
int fib(int n);

int main() {
    int n = 6;
    printf("Fibonacci of %d = %d\n", n, fib(n));
    return 0;
}

// Recursive function
int fib(int n) {
    if (n == 0) {
        return 0;   // Base case 1
    } 
    if (n == 1) {
        return 1;   // Base case 2
    }
    // Recursive case
    int fibn1 = fib(n - 1);
    int fibn2 = fib(n - 2);
    int fibto = fibn1 + fibn2;
    return fibto;
}
