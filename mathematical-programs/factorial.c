#include <stdio.h>
// to find factorial of a number using while loop
int main() {
    int num = 5; 
    printf("Enter a number: ");
    scanf("%d", &num);
    int factorial = 1; // initialize factorial to 1
    int i = 1; // initialize counter to 1
    while (i <= num) { // loop until i is less than or equal to num
        factorial *= i; // multiply factorial by i (factorial = factorial * i)
        i++; // increment counter
    }
    printf("Factorial of %d is: %d\n", num, factorial);
    return 0;
}