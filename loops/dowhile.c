/* Do while loop example in C -Exit Controlled Loop
   This program demonstrates the use of a do-while loop to execute a block of code at least once, and then continue executing it as long as a certain condition is true.
*/
/* To print multiplication table of a number using do-while loop */
#include <stdio.h>
int main() {
    int num = 5, i = 1; // Initialize the number and the counter
    
    printf("Multiplication Table of %d:\n", num);
    
    do {
        printf("%d x %d = %d\n", num, i, num * i); // Print the current multiplication result
        i++; // Increment the counter
    } while (i <= 10); // Continue until the counter exceeds 10
    
    return 0;
}
