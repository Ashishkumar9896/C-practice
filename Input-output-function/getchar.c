/* getchar() - reads a single character from standard input */
#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    ch = getchar(); // Reads a character from standard input
    printf("You entered: %c\n", ch);
    
    return 0;
}