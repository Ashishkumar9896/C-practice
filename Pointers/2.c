/*
                                            Pointers in C
        Variable which stores or point to the memory address of another variable
        Denoted by " * "     - known as dereference operator   
        %p   - format specifier to print address in hexadecimal format
*/
#include <stdio.h>

int main(){
    int val =10;
    int *ptr=NULL; // declaring a pointer variable
    printf("Null pointer: %p\n",ptr); // printing the value of null pointer
    ptr = &val;  // ptr is a pointer variable that holds the address of val    
    printf("Value of val: %d\n",val);
    printf("Address of val: %p\n",&val);
    printf("Value of ptr: %d\n",*ptr);
    printf("Address of ptr: %p\n",ptr);
    // we can use multiple pointers to point to the same variable
        int *ptr2 = &val; // ptr2 also points to val
    printf("Value of ptr2: %d\n",*ptr2);
    printf("Address of ptr2: %p\n",ptr2);
    return 0;
}