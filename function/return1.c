#include <stdio.h>
int func(int x, int y) {
    return x + y; // returning the sum of x and y to the caller 

}
float func2(float a, float b) {
    return a * b; // returning the product of a and b to the caller
}
float func3(int  a, int b) {
    return a + b; // returning the sum of a and b to the caller
}
int main() {
    int x,y;
    printf("Enter first  numbers: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    int result = func(x, y); // Calling the func function and storing the result
    printf("The sum of %d and %d is: %d\n", x, y, result);
    float result2 = func2(3.5, 2.0); // Calling the func2 function and storing the result
    printf("The product of 3.5 and 2.0 is: %.2f\n", result2);
    float result3 = func3(x, y); // Calling the func3 function and storing the result
    printf("The sum of %d and %d is: %.2f\n", x, y, result3);
    return 0;
}