// Example of if-else if ladder in C
/* In this program, we check whether a number is positive, negative, or zero using an if-else if ladder. The program prompts the user to enter a number, and then it evaluates the number using multiple conditions to determine its nature. */
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is positive.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    printf("Program ended.\n");
    return 0;
}