#include <stdio.h>
int main() {
    float marks, total_marks, percentage;

    printf("Enter the marks obtained: ");
    scanf("%f", &marks);

    printf("Enter the total marks: ");
    scanf("%f", &total_marks);

    percentage = (marks / total_marks) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}