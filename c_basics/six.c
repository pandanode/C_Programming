#include<stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            continue; // Skip the number 6
        }
        printf("%d\n", i);
    } // Print the result
    return 0;
}
