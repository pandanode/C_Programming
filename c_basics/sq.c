//Square of two numbers
#include <stdio.h>
int main() {
    int side, area;
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);
    area = side * side;
    printf("The area of the square is:%d", area);
    return 0;
}
