/* Call by Value
When the argument are passed to a function ,we do not pass the actual parameters, but we pass the values of the parameters 
we call this call by value 
*/
#include <stdio.h>
int num(int x){
    return x+1 ;
}
int main(){
    int x=4;
    printf("The value of x before calling the function: %d\n", x);
    int result = num(x); // Calling the function and storing the result
    printf("The value of x after calling the function: %d\n", x); // x remains unchanged
    printf("The result returned by the function: %d\n", result); // result is 5, which is x + 1
    return 0;
}
