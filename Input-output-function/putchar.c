/* putchar()-This function is used to write a single character to the standard output (console). 
It takes an integer argument, which is the ASCII value of the character to be printed, and returns
 the character written as an unsigned char cast to an int, or EOF on error.
*/
#include <stdio.h>
int main(){         
	char ch;

	printf("Enter a character: ");
	scanf(" %c", &ch);

	printf("You entered: ");
	putchar(ch);
	putchar('\n');

	return 0;
}