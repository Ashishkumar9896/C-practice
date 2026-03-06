// Nested if means if statements inside if statements. The inner if statement is executed only when the outer if statement condition is true.
#include <stdio.h>
int main() {
    int num;
    printf("Enter your Gpa: ");
    scanf("%d", &num);
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    if (num >= 0 && num <= 4) { // Outer if to check valid GPA range
        if (num >= 3) { // Inner if to check for high GPA
            if (grade == 'A') {
                printf("Excellent performance!\n");
            } else if (grade == 'B') {
                printf("Good job, but you can do better!\n");
            }
        } else {
            if (grade == 'C') {
                printf("You need to improve your performance.\n");
            } else {
                printf("Keep trying!\n");
            }
        }
    } else {
        printf("Invalid GPA entered.\n");
    }
    return 0;
}
    
//it is similar to if else but it is used when we have multiple conditions to check and we want to check them in a nested manner.
