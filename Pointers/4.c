#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr; // declaring a pointer variable
    char *str; // declaring a pointer variable for string
    float *flt; // declaring a pointer variable for float
    double *dbl; // declaring a pointer variable for double
    long *lng; // declaring a pointer variable for long
    // allocating memory for the pointer variables
    printf("\nSize of int pointer: %d",sizeof(ptr));
    printf("\nSize of char pointer: %d",sizeof(str));
    printf("\nSize of float pointer: %d",sizeof(flt));
    printf("\nSize of double pointer: %d",sizeof(dbl));
    printf("\nSize of long pointer: %d",sizeof(lng));

    return 0;
}