#include <stdio.h>

int main() {
    float cp, sp;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        float profit = sp - cp;
        printf("Profit: %.2f\n", profit);
    } else if (cp > sp) {
        float loss = cp - sp;
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}