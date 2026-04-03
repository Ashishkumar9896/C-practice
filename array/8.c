//List prime no inside the array
#include <stdio.h>
int checkPrime(int arr[10],int n) { //function to check if a number is prime
    for(int i=0; i<n; i++) {
        if(arr[i] <= 1){
             continue;
         } //skip numbers less than or equal to 1
         int isPrime = 1; //flag to check if number is prime
        for(int j=2; j<=arr[i]/2; j++) {
            if(arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

int main(){
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    checkPrime(arr, n);
    return 0;
}