//To find the sum of square of digits of a number
#include <stdio.h>
int main() {
    int n,digit,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n); // Read the number from the user
    do{
        digit = n % 10; // Get the last digit of n
        sum += digit * digit; // Add the square of the digit to sum
        n /= 10; // Remove the last digit from n
    } while(n > 0); // Continue until n becomes 0
    printf("The sum of square of digits is: %d\n", sum); // Print the result
    return 0;
}