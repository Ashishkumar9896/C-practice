#include <stdio.h>
int main() {
    int n = 5;
    int i=1;
    int sum = 0;
    while(i<=n){
        sum = sum + i; // sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}