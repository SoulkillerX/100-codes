#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        product *= (2 * i);
    }

    printf("Product of first %d even numbers is: %lld\n", n, product);
    return 0;
}