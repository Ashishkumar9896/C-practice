/* Function - A block of code which performs a specific task 
it is used to achieve:
Modularity: Functions allow you to break down a complex problem into smaller, more manageable pieces. Each function can be designed to perform a specific task, making it easier to understand and maintain the code.
Reusability: Once a function is defined, it can be reused multiple times throughout the program. This promotes code reusability and reduces redundancy, as you can call the same function whenever you need to perform the same task.
Abstraction: Functions provide a level of abstraction by hiding the implementation details. You can use a function without needing to know how it works internally, which allows you to focus on the higher-level logic of your program.
Types oF Functions:
1. Built-in Functions: These are functions that are provided by the programming language or libraries. They perform common tasks and are readily available for use. Examples include printf() in C, which is used for output, and sqrt() in C, which calculates the square root of a number.
2. User-defined Functions: These are functions that you create yourself to perform specific tasks in your program. You can define your own functions to encapsulate code that you want to reuse or to organize your program into logical sections.

*/
//User-defined function example in C
#include <stdio.h>
void greet() {//void is the return type of the function, it indicates that the function does not return any value
    printf("Hello, World!\n");
}
int main() {
    greet(); // Calling the user-defined function
    printf("Welcome to C programming.\n");
    return 0;
}
/*
--Parameters :Input variable passed to the fuction
--Arguments :Values passed to the function when it is called
*/