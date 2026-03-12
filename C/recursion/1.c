//The problem is divided into sub problems, and each sub problem is solved recursively.
//Use the subproblem to solve the actual problem 
//fib(n) = fib(n-1) + fib(n-2)
#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
