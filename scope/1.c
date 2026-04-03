//scope rule in c
/*
There are 2 type of Variable scope:-
1. Local variable
2. Global variable

Local Variables declared inside a block are local to that block 
can be accessed in function where is declared and can not be accessed outside that function

Global variables declared outside a block are global to that file 
can be accessed from any function within that file and can be accessed outside that file by using extern keyword
*/
#include <stdio.h>
int a=10; //global variable
void myfunction(){
    int b=20; //local variable
    printf("Inside function: %d\n",a); //accessing global variable
    printf("Inside function: %d\n",b); //accessing local variable
}
int main(){
    myfunction();
    printf("Inside main: %d\n",a); //accessing global variable
    //printf("Inside main: %d\n",b); //error: 'b' undeclared (first use in this function)
    return 0;
}