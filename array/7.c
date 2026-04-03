#include <stdio.h>
void squaredArray(int arr[], int size) { //function to square each element of the array
    for(int i=0; i<size; i++) { //loop to iterate through array elements
        arr[i] = arr[i] * arr[i]; //square each element and update the array
    }
}
int main(){
    int n=5;
    int arr[]={3,5,6,2,7}; //declaration and initialization of an array of size 5
    squaredArray(arr, n); //call the function to square each element of the array
    for (int i=0; i<n; i++) { //loop to print the squared array elements
        printf("%d ", arr[i]); //print each squared element followed by a space
    }    
    return 0;
}