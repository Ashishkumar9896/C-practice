/* These fuction handle input and output at the console or std out
scanf() and printf() are basic input and output functions in C. They are used to read input from the user and display output to the console, respectively.
Formatted functions: Both scanf() and printf() allow you to format the input and output using format specifiers. For example, %d is used for integers, %f for floating-point numbers, and %s for strings.
Return values: scanf() returns the number of input items successfully matched and assigned, while printf() returns the number of characters printed (excluding the null byte).
Standard library: Both functions are part of the C standard library and require including the <stdio.h> header file to use them.
Formatted functions are parts of <Stdio.h> library and are used to read and write formatted data. They allow you to specify the format of the input and output, making it easier to handle different types of data.
There are sprintf() and sscanf() functions which are similar to printf() and scanf() but they write to a string instead of the console. These functions are useful for formatting data into a string or parsing data from a string.
These 2 function reads a character array and display the value in a variable. They are used to read and write formatted data, allowing you to specify the format of the input and output. This makes it easier to handle different types of data, such as integers, floating-point numbers, and strings.
Example of using sscanf() and sprintf():

*/
#include <stdio.h>
int main() {
    char str[100];
    int num;
    
    // Using sprintf to format a string
    sprintf(str, "The number is: %d", 42); // here we are formatting the string to include the number 42
    printf("%s\n", str); // Output: The number is: 42
    
    // Using sscanf to read formatted input from a string
    char input[] = "12345ABC";
    sscanf(input, "%d", &num);
    printf("The number read from the string is: %d\n", num); // Output: The number read from the string is: 12345
    
    return 0;
}