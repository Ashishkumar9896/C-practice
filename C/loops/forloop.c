/* For Loop - Entry Controlled Loop
1. Repetition control structure which allows us to write code efficiently
2. This loop is used when we know the number of times we want to execute a block of code.
3. It consists of three parts: initialization, condition, and increment/decrement.
4. The syntax of a for loop is as follows:
   for (initialization; condition; increment/decrement) {
       // code to be executed
   }

   
*/
#include <stdio.h>
int main() {
    int i; // Declare the loop counter variable
    
    printf("Numbers from 0 to 9:\n");
    
    for (i = 0; i < 10; i++) { // Initialize i to 0, check if i is less than 10, and increment i by 1 in each iteration
        printf("%d ", i); // Print the current value of i followed by a space
    }
    
    printf("\n"); // Print a newline after the loop completes
    
    return 0; // Return 0 to indicate successful execution
}