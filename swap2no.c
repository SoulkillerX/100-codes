#include <stdio.h>

int main() {
    float a, b;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Before swapping: a = %.2f, b = %.2f\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %.2f, b = %.2f\n", a, b);

    return 0;
}