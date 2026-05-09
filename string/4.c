#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Hello World";
    for(int i=0;str[i]!='\0';i++){
        printf("%c ",str[i]);
    }
// to find the length of string
printf("\nLength of string is: %d",strlen(str));
// to reverse a string
printf("\nReversed string is: %s",strrev(str));
    return 0;

}