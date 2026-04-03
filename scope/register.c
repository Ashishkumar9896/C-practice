/*
register
default value: garbage value
scope : local to the function where it is declared
storage : cpu register
lifetime : until the function exits or till end of the scope where it is declared
optional because in c variable are local by default
obsolete in c11 and removed in c17, it is not recommended to use register storage class specifier in modern C programming because compilers are now able to optimize variable storage without the need for explicit hints from the programmer.
we can't take input using scanf as it is not allowed with register

*/
#include <stdio.h>
void myfunction(){
    register int a=20; //local variable with register storage class
    printf("Inside function: %d\n",a); //accessing local variable
}
int main(){
    printf("a is not available in main function\n"); //a is not available outside the function
    myfunction();
    printf("a is still not available in main function\n"); //a is not updated in main function because it is local variable in myfunction
    return 0;
}