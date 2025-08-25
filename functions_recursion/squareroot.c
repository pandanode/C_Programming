#include <stdio.h>

int squareRecursive(int n, int times);

int main() {
    int num = 6;
    int result = squareRecursive(num, num);
    printf("Square of %d = %d\n", num, result);
    return 0;
}
int squareRecursive(int n, int times) {
    if (times == 0) {
        return 0;   // Base case
    }
    return n + squareRecursive(n, times - 1);  // Recursive step
}
// squareRecursive(4, 4)
// = 4 + squareRecursive(4, 3)
// = 4 + (4 + squareRecursive(4, 2))
// = 4 + (4 + (4 + squareRecursive(4, 1)))
// = 4 + (4 + (4 + (4 + squareRecursive(4, 0))))
// = 4 + (4 + (4 + (4 + 0)))
// = 16

   