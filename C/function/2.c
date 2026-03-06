//is Even
#include <stdio.h>
void isEven(int num) {//this is parameter of function
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isEven(num); // Calling the function to check if the number is even or odd .this is argument of function
    return 0;
}