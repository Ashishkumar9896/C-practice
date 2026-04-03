//auto: defines local variable inside a function, it is the default storage class for local variables
/*
properties of auto variable:
1. It is stored in stack memory.
2. It is created when the function is called and destroyed when the function exits.
3. It can only be accessed within the function where it is declared.
default value: garbage value (undefined behavior if accessed before initialization)
scope : local to the function where it is declared
storage : ram
lifetime : until the function exitsor till end of the scope where it is declared
optional because in c variable are local by default

*/
#include <stdio.h>
void myfunction(){
    auto int a=20; //local variable with auto storage class
    printf("Inside function: %d\n",a); //accessing local variable
}
int main(){
    printf("a is not available in main function\n"); //a is not available outside the function
    myfunction();
    printf("a is still not available in main function\n"); //a is not updated in main function because it is local variable in myfunction
    return 0;
}