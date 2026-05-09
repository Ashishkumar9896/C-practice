/*
                            STRINGS
Character combined together are known as strings.
A string is a sequence of characters terminated by a null character '\0'.
char array_name[size];
means it can store size-1 characters and 1 null character.
*/

#include <stdio.h>
int main(){
    char str[20]="Hello World";
    printf("using str[20]: %s ",str);
    char str1[]="Hello World";
    printf("\nusing str[]: %s ",str1);
    char str2[]={'H','e','l','l','o','\0'};
    printf("\nusing char array: %s ",str2);
    char *str3="Hello World";
    printf("\nusing pointer: %s ",str3);
    return 0;
}
