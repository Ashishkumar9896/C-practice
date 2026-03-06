// To check if a number is an Armstrong number
#include <stdio.h>
int main() {
    int num=156, originalNum, remainder, result = 0;
    
    originalNum = num; // store the original number for later comparison
    
    while (originalNum > 0) { // loop until originalNum becomes 0
        remainder = originalNum % 10; // get the last digit
        result += remainder * remainder * remainder; // add the cube of the digit to result
        originalNum /= 10; // remove the last digit from originalNum
    }
    
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}