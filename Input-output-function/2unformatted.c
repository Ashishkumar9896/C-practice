/* These functions work only on character or character arrays (strings) .
Do not support formatted input/output like scanf() and printf().
They are used for reading and writing individual characters or strings.
getch() and getche() are part of <conio.h> library and are used to read a single character from the keyboard without echoing it to the console.
getch() does not display the character on the screen, while getche() does.
getchar() and putchar() are part of <stdio.h> library and are used to read a single character from the standard input (keyboard) and write a single character to the standard output (console), respectively.
getchar() reads a character and returns it as an integer, while putchar() takes an integer argument and writes the corresponding character to the console.
Example of using getch(), getche(), getchar(), and putchar():   

*/
#include <stdio.h>
#include <conio.h>  
int main() {
    char ch;
    
    printf("Press any key (getch): ");
    ch = getch(); // Reads a character without echoing it
    printf("\nYou pressed: %c\n", ch);
    
    printf("Press any key (getche): ");
    ch = getche(); // Reads a character and echoes it
    printf("\nYou pressed: %c\n", ch);
    
    printf("Enter a character (getchar): ");
    ch = getchar(); // Reads a character from standard input
    printf("You entered: %c\n", ch);
    
    printf("Enter a character to display (putchar): ");
    ch = getchar(); // Read another character for putchar
    putchar(ch); // Writes the character to the console
    printf("\n");
    
    return 0;
}