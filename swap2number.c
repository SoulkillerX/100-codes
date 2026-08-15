#include <stdio.h>

int main() {
    float a, b, c;

    // Take input from the user
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Before swapping: a = %.2f, b = %.2f\n", a, b);

    // Swap using a third variable
    c = a;
    a = b;
    b = c;

    printf("After swapping: a = %.2f, b = %.2f\n", a, b);

    return 0;
}