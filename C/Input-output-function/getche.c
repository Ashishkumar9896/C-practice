/* getche()- display the character entered by user immediately after pressing it */
#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    
    printf("Press any key (getche): ");
    ch = getche(); // Reads a character and displays it immediately
    printf("\nYou pressed: %c\n", ch);
    
    return 0;
}