//To write a recursive function to print the first n number
//Every recursive problem has 2 cases: base case and recursive case
//base case: the simplest case that can be solved directly
//recursive case: the case that can be solved by calling the function itself with a smaller input
#include <stdio.h>

void printNumbers(int n) {
    if (n == 0) {
        return;
    }
    printNumbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The first %d numbers are: ", n);
    printNumbers(n);
    return 0;
}
