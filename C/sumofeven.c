//To find the sum of even numbers from 1 to n
#include <stdio.h>
int main() {
    int n,i=0,sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n); // Read the value of n from the user
    
    do{
        if(i%2==0){ // Check if i is even
            sum += i; // Add i to sum if it is even
        }
        i++;
    } while(i <= n); // Continue until i exceeds n
    
    printf("The sum of even number from 1 to %d is: %d\n", n, sum); // Print the result
    
    return 0;
}