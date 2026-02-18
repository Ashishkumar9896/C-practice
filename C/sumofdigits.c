//TO get the no from user and find the sum of its digits
#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) { // loop until num becomes 0
        sum += num % 10; // add the last digit of num to sum
        num /= 10; // remove the last digit from num
    }
    
    printf("Sum of the digits is: %d\n", sum);
    return 0;
}