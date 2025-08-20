#include <stdio.h>
#include <math.h>
float squareArea(float side);
double circleArea(double radius);
float rectanglearea(float length, float width);
int main() {
    float side, length, width;
    double radius;

    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("Area of the square: %.2f\n", squareArea(side));

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    printf("Area of the circle: %.2lf\n", circleArea(radius));

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of the rectangle: %.2f\n", rectanglearea(length, width));

    return 0;
}
float squareArea(float side) {
    return side * side;
}
double circleArea(double radius) {
    return 3.14 * radius * radius;
}
float rectanglearea(float length, float width) {
    return length * width;
}

