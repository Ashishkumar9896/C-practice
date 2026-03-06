/* Return statement :- It is used to exit a function and return control to the calling function. 
C function can return 
.constant values like integers, floats, characters, etc.
.variable values like arrays, structures, etc.
.calculated value of an expression 
.Another function that returns a value 
We cannot use return statement with void functions */
#include<stdio.h>
int add(int a, int b){// add is the name of the function, int is the return type of the function, a and b are the parameters of the function
    return a+b;//it cannot return the float value because the return type of the function is int
}
float add_float(int a, float b){// add is the name of the function, float is the return type of the function, a and b are the parameters of the function
    return a+b;//it cannot return the integer value because the return type of the function is float
    }

    int main(){
        int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int sum = add(x, y);
    printf("Sum = %d\n", sum);
    float sum_float = add_float(x, y);
    printf("Sum (float) = %f\n", sum_float);
    return 0;
}