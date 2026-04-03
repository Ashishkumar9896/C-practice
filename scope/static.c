/*
static 
default value: 0
scope : local to the function where it is declared
storage : ram
lifetime : until the program ends
for 1st call :1
for 2nd call :2
for 3rd call :3



*/
#include <stdio.h>
void myfunction(){
    static int a=0; //local variable with static storage class
    a++; //incrementing the value of a
    printf("Inside function: %d\n",a); //accessing local variable
}
int main(){
    printf("a is not available in main function\n"); //a is not available outside the function
    myfunction(); //1st call
    myfunction(); //2nd call
    myfunction(); //3rd call
    printf("a is still not available in main function\n"); //a is not updated in main function because it is local variable in myfunction
    return 0;
}