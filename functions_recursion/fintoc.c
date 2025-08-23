//convert celsius to fahrenheit
//f = (c * 9/5) + 32
#include <stdio.h>
float convtemp(float cel);
int main()
{
    float cel;
    printf("Enter the temperature in celsius:");
    scanf("%f", &cel);
    printf("Temperature in fahrenheit: %.2f\n", convtemp(cel));
    return 0;
}
float convtemp(float cel){
    float far = cel * 9.0/5.0 + 32;
    return far;
}
// cel → parameter (input to the function).

// It stores the Celsius value passed from main().

// far → local variable (inside the function).

// It stores the calculated Fahrenheit value.

// return far; → sends the Fahrenheit value back to main().
float convtemp(float cel) {
    return cel * 9.0/5.0 + 32;
}


// cel → input (given by user).

// far → output (calculated result).

// You call the function with cel because you need input to calculate something.

// The function returns far because that’s the output you want.