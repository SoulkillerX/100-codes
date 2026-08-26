#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid input. Lengths must be positive numbers.\n");
    } else if (a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}