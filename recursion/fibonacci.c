/* Fibonacci sequence using recursion 
fib(n) = fib(n-1) + fib(n-2) 
fib(4) = fib(3) + fib(2) = (fib(2) + fib(1)) + (fib(1) + fib(0)) = ((fib(1) + fib(0)) + 1) + (1 + 0) = ((1 + 0) + 1) + (1 + 0) = (1 + 1) + 1 = 3 
*/
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