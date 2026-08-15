#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the value of n: ");
    // n is the number of natural numbers to sum
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}