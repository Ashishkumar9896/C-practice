//Looping statement in c
//They are a type of decision control statement that allows us to execute a block of code repeatedly based on a condition.
/*They have 2 components:
 1. condition 2. body of the loop

There are three types of loops in C: 
1. for loop - entry controlled loop
2. while loop - entry controlled loop
3. do-while loop - exit controlled loop

*/
/*WHILE LOOP - it executes a block of code repeatedly as long as the specified condition is true.
 The condition is evaluated before the execution of the loop body, making it an entry-controlled loop.
 sytax-
 while(condition){
    // code to be executed or loop body

 }
    
 */
#include <stdio.h>
int main() {
    int i = 1; // initialization
    while (i <= 5) { // condition
        printf("%d ", i); // loop body
        i++; // increment
    }
    printf("\nLoop completed.\n");
    return 0;
}