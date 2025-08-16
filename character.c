//program to check wether the given character is in digit or not
#include <stdio.h>
int main() {
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    printf("%d\n", (ch >= '0' && ch <= '9'));
    return 0;
}