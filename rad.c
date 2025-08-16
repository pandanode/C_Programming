//radius of the circle
#include <stdio.h>
int main() {
    float radius, area;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    area = 3.24 * radius * radius;
    printf("The radius of the circle is: %.2f\n", radius);
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}