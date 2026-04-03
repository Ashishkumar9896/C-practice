//Variable with 2 name declared as global and local are treated as different variable
#include <stdio.h>
int a=10; //global variable
void myfunction(){
    int a=20; //local variable with same name as global variable
    printf("Inside function: %d\n",a); //accessing local variable
}
int main(){
    printf("a before updation from main: %d\n",a); //x is not available outside the function
    myfunction();
    printf("a after updation from main: %d\n",a); //x is not updated in main function because it is local variable in myfunction
    return 0;
}