#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1-12) to get the corresponding month: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("January\n Number of days: 31\n");
            break;
        case 2:
            printf("February\n Number of days: 28(29 days in a leap year)\n");
            break;
        case 3:
            printf("March\n Number of days: 31\n");
            break;
        case 4:
            printf("April\n Number of days: 30\n");
            break;
        case 5:
            printf("May\n Number of days: 31\n");
            break;
        case 6:
            printf("June\n Number of days: 30\n");
            break;
        case 7:
            printf("July\n Number of days: 31\n");
            break;
        case 8:
            printf("August\n Number of days: 31\n");
            break;
        case 9:
            printf("September\n Number of days: 30\n");
            break;
        case 10:
            printf("October\n Number of days: 31\n");
            break;
        case 11:
            printf("November\n Number of days: 30\n");
            break;
        case 12:
            printf("December\n Number of days: 31\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 12.\n");
    }

    return 0;
}