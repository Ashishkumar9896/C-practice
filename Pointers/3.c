#include <stdio.h>

int main(){
    float val=10;
    float *ptr;
    ptr=&val; // ptr is a pointer variable that holds the address of val
    printf("Pointer ptr holds the address of val: %p\n",ptr);
    printf("Value of val using pointer dereferencing: %f\n",*ptr);

    return 0;
}