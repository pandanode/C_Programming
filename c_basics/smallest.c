#include <stdio.h>

int main() {
    int smallest, no1, no2, no3;

    printf("Enter the three numbers: ");
    scanf("%d%d%d", &no1, &no2, &no3);

    smallest = (no1 < no2) ? no1 : no2;  // First compare no1 and no2
    smallest = (smallest < no3) ? smallest : no3;  // Then compare with no3

    printf("The smallest number is: %d\n", smallest);

    return 0;
}
