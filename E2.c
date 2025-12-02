#include <stdio.h>

int main() {
    // 1. Rectangle area & perimeter
    float l, w;
    printf("Enter length and width: ");
    scanf("%f %f", &l, &w);
    printf("Area = %.2f\n", l * w);
    printf("Perimeter = %.2f\n", 2 * (l + w));

    // 2. Celsius to Fahrenheit
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit = %.2f\n", (c * 9/5) + 32);

    return 0;
}
