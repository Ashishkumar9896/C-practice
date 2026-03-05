/* grtch()- display the character entered by user after pressing enter buttom*/
#include <stdio.h>
#include <conio.h>
int main() {
    char ch;
    
    printf("Press any key (getch): "); //reaads a character but will not display untill user press the enter buttom
    ch = getch(); // Reads a character without echoing it
    printf("\nYou pressed: %c\n", ch);
    
    return 0;
}