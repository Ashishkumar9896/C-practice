/* In C function can return values 
After the return statement the caller is passed to the calling body and the fuction is existed
return cannot be used outside a function 
and cannot be used in a void function
*/
#include <stdio.h>
int Add(int x,int y){
    return x+y;//returning the sum of x and y to the caller
}
int main(){
    printf("The sum of 5 and 10 is: %d\n", Add(5,10)); // Calling the Add function and printing the result
    return 0;
}
//Function return the type with which it has declared
#include <stdio.h>
float Multiply(float a, float b) {
    return a * b; // returning the product of a and b to the caller
}
int main(){
    printf("The product of 3.5 and 2.0 is: %.2f\n", Multiply(3.5, 2.0)); // Calling the Multiply function and printing the result
    return 0;
}
